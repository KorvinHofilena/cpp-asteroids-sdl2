#include <SDL2/SDL.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <random>
#include <iostream>

struct Vec2
{
    float x{}, y{};
    Vec2() = default;
    Vec2(float x_, float y_) : x(x_), y(y_) {}
    Vec2 operator+(const Vec2 &r) const { return {x + r.x, y + r.y}; }
    Vec2 operator-(const Vec2 &r) const { return {x - r.x, y - r.y}; }
    Vec2 operator*(float s) const { return {x * s, y * s}; }
    Vec2 &operator+=(const Vec2 &r)
    {
        x += r.x;
        y += r.y;
        return *this;
    }
};

static inline float radians(float deg) { return deg * 3.14159265358979323846f / 180.0f; }
static inline float len2(const Vec2 &v) { return v.x * v.x + v.y * v.y; }

struct Bullet
{
    Vec2 pos;
    Vec2 vel;
    float ttl;
};

struct Asteroid
{
    Vec2 pos;
    Vec2 vel;
    float radius;
};

struct Tunables
{
    int W = 800, H = 600;

    float accel = 300.0f;
    float drag = 0.992f;
    float rot_speed = 240.0f;
    float ship_radius = 12.0f;

    float bullet_speed = 520.0f;
    float bullet_lifetime = 1.2f;
    float fire_cooldown = 0.18f;

    int initial_asteroids = 5;
    float asteroid_min_r = 12.0f;
    float asteroid_max_r = 38.0f;
    float asteroid_min_speed = 40.0f;
    float asteroid_max_speed = 110.0f;

    float dt_fixed = 1.0f / 120.0f;
} T;

static void drawLine(SDL_Renderer *R, const Vec2 &a, const Vec2 &b)
{
    SDL_RenderDrawLine(R, int(a.x), int(a.y), int(b.x), int(b.y));
}

static void drawWireCircle(SDL_Renderer *R, Vec2 c, float r, int segs = 18)
{
    float step = 360.0f / float(segs);
    Vec2 prev{c.x + std::cos(radians(0)) * r, c.y + std::sin(radians(0)) * r};
    for (int i = 1; i <= segs; ++i)
    {
        float ang = step * i;
        Vec2 p{c.x + std::cos(radians(ang)) * r, c.y + std::sin(radians(ang)) * r};
        drawLine(R, prev, p);
        prev = p;
    }
}

static void drawShip(SDL_Renderer *R, Vec2 p, float ang, bool thrust)
{
    const float r = 16.0f;
    auto rad = [&](float d)
    { return radians(d); };
    Vec2 nose{p.x + std::cos(rad(ang)) * r, p.y + std::sin(rad(ang)) * r};
    Vec2 lft{p.x + std::cos(rad(ang + 140)) * r, p.y + std::sin(rad(ang + 140)) * r};
    Vec2 rgt{p.x + std::cos(rad(ang - 140)) * r, p.y + std::sin(rad(ang - 140)) * r};

    SDL_SetRenderDrawColor(R, 220, 220, 220, 255);
    drawLine(R, nose, lft);
    drawLine(R, lft, rgt);
    drawLine(R, rgt, nose);

    if (thrust)
    {
        Vec2 tail{p.x + std::cos(rad(ang + 180)) * (r * 0.8f),
                  p.y + std::sin(rad(ang + 180)) * (r * 0.8f)};
        SDL_SetRenderDrawColor(R, 250, 120, 40, 255);
        drawLine(R, tail, lft);
        drawLine(R, tail, rgt);
    }
}

int main(int, char **)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        std::cerr << "SDL_Init error: " << SDL_GetError() << "\n";
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Asteroids (C++ + SDL2)",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, T.W, T.H, SDL_WINDOW_SHOWN);
    SDL_Renderer *R = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!window || !R)
    {
        std::cerr << "SDL init failed: " << SDL_GetError() << "\n";
        return 1;
    }

    std::mt19937 rng{std::random_device{}()};
    std::uniform_real_distribution<float> rx(0.0f, float(T.W));
    std::uniform_real_distribution<float> ry(0.0f, float(T.H));
    std::uniform_real_distribution<float> rr(T.asteroid_min_r, T.asteroid_max_r);
    std::uniform_real_distribution<float> rdir(0.0f, 360.0f);
    std::uniform_real_distribution<float> rs(T.asteroid_min_speed, T.asteroid_max_speed);

    Vec2 ship_pos{T.W / 2.0f, T.H / 2.0f};
    Vec2 ship_vel{0.0f, 0.0f};
    float ship_ang = -90.0f;
    bool game_over = false;
    int score = 0;

    std::vector<Bullet> bullets;
    float fire_timer = 0.0f;

    std::vector<Asteroid> asteroids;

    auto spawn_asteroid = [&](float rad = -1.0f)
    {
        Asteroid a;
        a.pos = {rx(rng), ry(rng)};
        float ang = rdir(rng);
        float spd = rs(rng);
        a.vel = {std::cos(radians(ang)) * spd, std::sin(radians(ang)) * spd};
        a.radius = (rad > 0 ? rad : rr(rng));
        asteroids.push_back(a);
    };

    for (int i = 0; i < T.initial_asteroids; ++i)
        spawn_asteroid();

    auto wrap = [&](Vec2 &p)
    {
        if (p.x < 0)
            p.x += T.W;
        else if (p.x >= T.W)
            p.x -= T.W;
        if (p.y < 0)
            p.y += T.H;
        else if (p.y >= T.H)
            p.y -= T.H;
    };

    bool running = true;
    Uint64 prev = SDL_GetPerformanceCounter();
    double acc = 0.0;

    while (running)
    {

        Uint64 now = SDL_GetPerformanceCounter();
        double frame_dt = double(now - prev) / SDL_GetPerformanceFrequency();
        prev = now;
        acc += frame_dt;

        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
                running = false;
            if (e.type == SDL_KEYDOWN)
            {
                if (e.key.keysym.sym == SDLK_ESCAPE)
                    running = false;
                if (e.key.keysym.sym == SDLK_r && game_over)
                {

                    bullets.clear();
                    asteroids.clear();
                    for (int i = 0; i < T.initial_asteroids; ++i)
                        spawn_asteroid();
                    ship_pos = {T.W / 2.0f, T.H / 2.0f};
                    ship_vel = {0, 0};
                    ship_ang = -90.0f;
                    score = 0;
                    game_over = false;
                }
            }
        }

        const Uint8 *k = SDL_GetKeyboardState(nullptr);
        float rot = 0.0f;
        if (k[SDL_SCANCODE_LEFT] || k[SDL_SCANCODE_A])
            rot -= T.rot_speed;
        if (k[SDL_SCANCODE_RIGHT] || k[SDL_SCANCODE_D])
            rot += T.rot_speed;
        bool thrust = (k[SDL_SCANCODE_UP] || k[SDL_SCANCODE_W]);
        bool fire = k[SDL_SCANCODE_SPACE] && !game_over;

        while (acc >= T.dt_fixed)
        {
            if (game_over)
            {
                acc -= T.dt_fixed;
                continue;
            }

            if (fire_timer > 0.0f)
                fire_timer -= float(T.dt_fixed);

            ship_ang += rot * float(T.dt_fixed);

            if (thrust)
            {
                float ax = std::cos(radians(ship_ang)) * T.accel;
                float ay = std::sin(radians(ship_ang)) * T.accel;
                ship_vel.x += ax * float(T.dt_fixed);
                ship_vel.y += ay * float(T.dt_fixed);
            }

            ship_vel.x *= T.drag;
            ship_vel.y *= T.drag;

            if (fire && fire_timer <= 0.0f)
            {
                Vec2 dir{std::cos(radians(ship_ang)), std::sin(radians(ship_ang))};
                Vec2 spawn{ship_pos.x + dir.x * 18.0f, ship_pos.y + dir.y * 18.0f};
                bullets.push_back({spawn, dir * T.bullet_speed, T.bullet_lifetime});
                fire_timer = T.fire_cooldown;
            }

            ship_pos += ship_vel * float(T.dt_fixed);
            wrap(ship_pos);

            for (auto &b : bullets)
            {
                b.pos += b.vel * float(T.dt_fixed);
                wrap(b.pos);
                b.ttl -= float(T.dt_fixed);
            }
            bullets.erase(std::remove_if(bullets.begin(), bullets.end(),
                                         [](const Bullet &b)
                                         { return b.ttl <= 0.0f; }),
                          bullets.end());

            for (auto &a : asteroids)
            {
                a.pos += a.vel * float(T.dt_fixed);
                wrap(a.pos);
            }

            std::vector<size_t> kill_ast;
            std::vector<size_t> kill_bul;
            for (size_t i = 0; i < asteroids.size(); ++i)
            {
                for (size_t j = 0; j < bullets.size(); ++j)
                {
                    float r = asteroids[i].radius;
                    if (len2(asteroids[i].pos - bullets[j].pos) <= r * r)
                    {
                        kill_ast.push_back(i);
                        kill_bul.push_back(j);
                    }
                }
            }

            std::sort(kill_ast.begin(), kill_ast.end());
            kill_ast.erase(std::unique(kill_ast.begin(), kill_ast.end()), kill_ast.end());
            std::sort(kill_bul.begin(), kill_bul.end());
            kill_bul.erase(std::unique(kill_bul.begin(), kill_bul.end()), kill_bul.end());

            for (int idx = int(kill_bul.size()) - 1; idx >= 0; --idx)
                bullets.erase(bullets.begin() + kill_bul[idx]);

            for (int idx = int(kill_ast.size()) - 1; idx >= 0; --idx)
            {
                size_t i = kill_ast[idx];
                Asteroid hit = asteroids[i];
                asteroids.erase(asteroids.begin() + i);
                score += 10;

                float child_r = hit.radius * 0.6f;
                if (child_r >= T.asteroid_min_r + 1.0f)
                {
                    for (int k2 = 0; k2 < 2; ++k2)
                    {
                        float ang = rdir(rng);
                        float spd = rs(rng);
                        Asteroid c;
                        c.pos = hit.pos;
                        c.vel = {std::cos(radians(ang)) * spd, std::sin(radians(ang)) * spd};
                        c.radius = child_r;
                        asteroids.push_back(c);
                    }
                }
            }

            for (const auto &a : asteroids)
            {
                float R = a.radius + T.ship_radius;
                if (len2(a.pos - ship_pos) <= R * R)
                {
                    game_over = true;
                    break;
                }
            }

            if (!game_over && asteroids.empty())
            {
                int add = T.initial_asteroids + std::min(5, score / 60);
                for (int i = 0; i < add; ++i)
                    spawn_asteroid();
            }

            acc -= T.dt_fixed;
        }

        SDL_SetRenderDrawColor(R, 0, 0, 0, 255);
        SDL_RenderClear(R);

        SDL_SetRenderDrawColor(R, 255, 255, 255, 255);
        for (const auto &b : bullets)
        {
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x) + 1, int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x) - 1, int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y) + 1);
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y) - 1);
        }

        SDL_SetRenderDrawColor(R, 200, 200, 200, 255);
        for (const auto &a : asteroids)
        {
            drawWireCircle(R, a.pos, a.radius, 18);

            drawWireCircle(R, {a.pos.x - T.W, a.pos.y}, a.radius, 18);
            drawWireCircle(R, {a.pos.x + T.W, a.pos.y}, a.radius, 18);
            drawWireCircle(R, {a.pos.x, a.pos.y - T.H}, a.radius, 18);
            drawWireCircle(R, {a.pos.x, a.pos.y + T.H}, a.radius, 18);
        }

        if (!game_over)
        {
            bool thrust = (k[SDL_SCANCODE_UP] || k[SDL_SCANCODE_W]);
            drawShip(R, ship_pos, ship_ang, thrust);
            drawShip(R, {ship_pos.x - T.W, ship_pos.y}, ship_ang, thrust);
            drawShip(R, {ship_pos.x + T.W, ship_pos.y}, ship_ang, thrust);
            drawShip(R, {ship_pos.x, ship_pos.y - T.H}, ship_ang, thrust);
            drawShip(R, {ship_pos.x, ship_pos.y + T.H}, ship_ang, thrust);
        }

        SDL_RenderPresent(R);
    }

    SDL_DestroyRenderer(R);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
