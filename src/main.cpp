#include <SDL2/SDL.h>
#include <cmath>
#include <vector>
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

struct Bullet
{
    Vec2 pos;
    Vec2 vel;
    float ttl;
};

static inline float radians(float deg) { return deg * 3.14159265358979323846f / 180.0f; }

int main(int, char **)
{
    const int W = 800, H = 600;
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        std::cerr << "SDL_Init error: " << SDL_GetError() << "\n";
        return 1;
    }
    SDL_Window *window = SDL_CreateWindow("Asteroids (C++ + SDL2)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, W, H, SDL_WINDOW_SHOWN);
    SDL_Renderer *R = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!window || !R)
    {
        std::cerr << "SDL init failed: " << SDL_GetError() << "\n";
        return 1;
    }

    Vec2 pos{W / 2.0f, H / 2.0f};
    Vec2 vel{0.0f, 0.0f};
    float angle = -90.0f; // facing up

    // Tunables (made movement more obvious)
    const float accel = 300.0f; // was 220
    const float drag = 0.992f;  // was 0.995 (less drag)
    const float rot_speed = 240.0f;
    const float dt_fixed = 1.0f / 120.0f;

    std::vector<Bullet> bullets;
    const float bullet_speed = 520.0f;
    const float bullet_lifetime = 1.2f;
    const float fire_cooldown = 0.18f;
    float fire_timer = 0.0f;

    auto wrap = [&](Vec2 &p)
    {
        if (p.x < 0)
            p.x += W;
        else if (p.x >= W)
            p.x -= W;
        if (p.y < 0)
            p.y += H;
        else if (p.y >= H)
            p.y -= H;
    };

    auto drawShip = [&](Vec2 p, float ang, bool showThrust)
    {
        const float r = 16.0f;
        auto rad = [&](float d)
        { return radians(d); };
        Vec2 pts[3] = {
            {p.x + std::cos(rad(ang)) * r, p.y + std::sin(rad(ang)) * r},
            {p.x + std::cos(rad(ang + 140)) * r, p.y + std::sin(rad(ang + 140)) * r},
            {p.x + std::cos(rad(ang - 140)) * r, p.y + std::sin(rad(ang - 140)) * r}};
        auto line = [&](Vec2 a, Vec2 b)
        { SDL_RenderDrawLine(R, int(a.x), int(a.y), int(b.x), int(b.y)); };
        SDL_SetRenderDrawColor(R, 220, 220, 220, 255);
        line(pts[0], pts[1]);
        line(pts[1], pts[2]);
        line(pts[2], pts[0]);

        if (showThrust)
        {
            Vec2 tail{p.x + std::cos(rad(ang + 180.f)) * (r * 0.8f),
                      p.y + std::sin(rad(ang + 180.f)) * (r * 0.8f)};
            SDL_SetRenderDrawColor(R, 250, 120, 40, 255);
            SDL_RenderDrawLine(R, int(tail.x), int(tail.y), int(pts[1].x), int(pts[1].y));
            SDL_RenderDrawLine(R, int(tail.x), int(tail.y), int(pts[2].x), int(pts[2].y));
        }
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
            if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE)
                running = false;
        }
        const Uint8 *k = SDL_GetKeyboardState(nullptr);
        float rot = 0.0f;
        if (k[SDL_SCANCODE_LEFT] || k[SDL_SCANCODE_A])
            rot -= rot_speed;
        if (k[SDL_SCANCODE_RIGHT] || k[SDL_SCANCODE_D])
            rot += rot_speed;
        bool thrust = (k[SDL_SCANCODE_UP] || k[SDL_SCANCODE_W]);
        bool fire = k[SDL_SCANCODE_SPACE];

        while (acc >= dt_fixed)
        {
            if (fire_timer > 0.0f)
                fire_timer -= float(dt_fixed);

            angle += rot * float(dt_fixed);

            if (thrust)
            {
                float ax = std::cos(radians(angle)) * accel;
                float ay = std::sin(radians(angle)) * accel;
                vel.x += ax * float(dt_fixed);
                vel.y += ay * float(dt_fixed);
            }

            if (fire && fire_timer <= 0.0f)
            {
                Vec2 dir{std::cos(radians(angle)), std::sin(radians(angle))};
                Vec2 spawn{pos.x + dir.x * 18.0f, pos.y + dir.y * 18.0f};
                bullets.push_back({spawn, dir * bullet_speed, bullet_lifetime});
                fire_timer = fire_cooldown;
            }

            vel.x *= drag;
            vel.y *= drag;
            pos += vel * float(dt_fixed);
            wrap(pos);

            for (auto &b : bullets)
            {
                b.pos += b.vel * float(dt_fixed);
                wrap(b.pos);
                b.ttl -= float(dt_fixed);
            }
            bullets.erase(std::remove_if(bullets.begin(), bullets.end(),
                                         [](const Bullet &b)
                                         { return b.ttl <= 0.0f; }),
                          bullets.end());

            acc -= dt_fixed;
        }

        SDL_SetRenderDrawColor(R, 0, 0, 0, 255);
        SDL_RenderClear(R);

        // bullets
        SDL_SetRenderDrawColor(R, 255, 255, 255, 255);
        for (const auto &b : bullets)
        {
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x) + 1, int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x) - 1, int(b.pos.y));
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y) + 1);
            SDL_RenderDrawPoint(R, int(b.pos.x), int(b.pos.y) - 1);
        }

        // velocity indicator (short line from ship center)
        SDL_SetRenderDrawColor(R, 80, 180, 255, 255);
        SDL_RenderDrawLine(R, int(pos.x), int(pos.y),
                           int(pos.x + vel.x * 0.1f), int(pos.y + vel.y * 0.1f));

        // ship + wrap ghosts
        drawShip(pos, angle, thrust);
        drawShip({pos.x - W, pos.y}, angle, thrust);
        drawShip({pos.x + W, pos.y}, angle, thrust);
        drawShip({pos.x, pos.y - H}, angle, thrust);
        drawShip({pos.x, pos.y + H}, angle, thrust);

        SDL_RenderPresent(R);
    }

    SDL_DestroyRenderer(R);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
