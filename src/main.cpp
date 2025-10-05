#include <SDL.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "Enemy.h"
#include "Particle.h"
#include "PowerUp.h"

static const int SCREEN_W = 800;
static const int SCREEN_H = 600;
static const float SHIP_TURN_SPEED = 3.6f;
static const float SHIP_THRUST = 210.0f;
static const float SHIP_DRAG = 0.985f;
static const float BULLET_SPEED = 460.0f;
static const float BULLET_TTL = 1.2f;
static const float FIRE_COOLDOWN_BASE = 0.18f;

struct Bullet
{
    float x{}, y{}, vx{}, vy{}, ttl{BULLET_TTL};
    bool alive{true};
    float px{}, py{};
};
struct Star
{
    float x{}, y{}, spd{};
};

struct Ship
{
    float x{SCREEN_W * 0.5f}, y{SCREEN_H * 0.5f};
    float angle{-3.14159f / 2.0f}, vx{0}, vy{0};
    int lives{3}, score{0};
    float fireTimer{0.0f};
    float shieldTimer{0.0f};
    float rapidTimer{0.0f};
};

static void wrap(float &x, float &y)
{
    if (x < 0)
        x += SCREEN_W;
    if (x >= SCREEN_W)
        x -= SCREEN_W;
    if (y < 0)
        y += SCREEN_H;
    if (y >= SCREEN_H)
        y -= SCREEN_H;
}
static float length2(float dx, float dy) { return std::sqrt(dx * dx + dy * dy); }
static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }

static void drawShip(SDL_Renderer *r, const Ship &s, bool thrusting)
{
    float nx = s.x + cosf(s.angle) * 14.0f, ny = s.y + sinf(s.angle) * 14.0f;
    float lx = s.x + cosf(s.angle + 2.5f) * 12.0f, ly = s.y + sinf(s.angle + 2.5f) * 12.0f;
    float rx = s.x + cosf(s.angle - 2.5f) * 12.0f, ry = s.y + sinf(s.angle - 2.5f) * 12.0f;

    if (s.shieldTimer > 0.0f)
    {
        SDL_SetRenderDrawColor(r, 90, 200, 255, 90);
        SDL_Rect a{(int)(s.x - 16), (int)(s.y - 16), 32, 32};
        SDL_RenderDrawRect(r, &a);
    }

    if (thrusting)
    {
        float bx = s.x - cosf(s.angle) * 10.0f, by = s.y - sinf(s.angle) * 10.0f;
        SDL_SetRenderDrawColor(r, 255, 140, 60, 200);
        SDL_RenderDrawLine(r, (int)bx, (int)by, (int)(bx - cosf(s.angle) * 10.0f), (int)(by - sinf(s.angle) * 10.0f));
        SDL_SetRenderDrawColor(r, 255, 220, 120, 220);
        SDL_RenderDrawLine(r, (int)bx, (int)by, (int)(bx - cosf(s.angle) * 6.0f), (int)(by - sinf(s.angle) * 6.0f));
    }

    SDL_SetRenderDrawColor(r, 230, 230, 230, 255);
    SDL_RenderDrawLine(r, (int)nx, (int)ny, (int)lx, (int)ly);
    SDL_RenderDrawLine(r, (int)lx, (int)ly, (int)rx, (int)ry);
    SDL_RenderDrawLine(r, (int)rx, (int)ry, (int)nx, (int)ny);
}

static void drawHud(SDL_Renderer *r, const Ship &s)
{
    SDL_Rect livesRect{10, 10, 16, 16};
    SDL_SetRenderDrawColor(r, 200, 200, 255, 255);
    for (int i = 0; i < s.lives; ++i)
    {
        SDL_RenderFillRect(r, &livesRect);
        livesRect.x += 20;
    }

    int maxBar = 220;
    int bar = std::min(s.score, 2000) * maxBar / 2000;
    SDL_Rect bg{SCREEN_W - maxBar - 20, 10, maxBar, 10}, fg{SCREEN_W - maxBar - 20, 10, bar, 10};
    SDL_SetRenderDrawColor(r, 60, 60, 60, 255);
    SDL_RenderFillRect(r, &bg);
    SDL_SetRenderDrawColor(r, 120, 255, 120, 255);
    SDL_RenderFillRect(r, &fg);

    if (s.rapidTimer > 0.0f)
    {
        SDL_SetRenderDrawColor(r, 255, 180, 60, 255);
        SDL_Rect rf{SCREEN_W - 18, 30, 6, (int)(std::min(s.rapidTimer, 5.0f) / 5.0f * 90)};
        SDL_RenderFillRect(r, &rf);
    }
    if (s.shieldTimer > 0.0f)
    {
        SDL_SetRenderDrawColor(r, 90, 200, 255, 255);
        SDL_Rect sf{SCREEN_W - 28, 30, 6, (int)(std::min(s.shieldTimer, 5.0f) / 5.0f * 90)};
        SDL_RenderFillRect(r, &sf);
    }
}

int main(int, char **)
{
    std::srand((unsigned)std::time(nullptr));
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        std::printf("SDL_Init error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Asteroids+ (SDL2)",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);
    if (!window)
    {
        std::printf("SDL_CreateWindow error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
    {
        std::printf("SDL_CreateRenderer error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    Ship player{};
    std::vector<Bullet> bullets;
    std::vector<Enemy> enemies;
    std::vector<PowerUp> powerups;
    ParticleSystem particles;

    std::vector<Star> stars;
    for (int i = 0; i < 150; ++i)
    {
        stars.push_back({frand(0, (float)SCREEN_W), frand(0, (float)SCREEN_H), frand(10.0f, 26.0f)});
    }

    float enemySpawnTimer = 0.0f, enemySpawnEvery = 2.0f, powerupTimer = 0.0f, pauseToggleLock = 0.0f;
    bool running = true, paused = false;
    float timePlayed = 0.0f;

    float shakeTime = 0.0f, shakeAmt = 0.0f;

    Uint64 now = SDL_GetPerformanceCounter(), last = now;
    double freq = (double)SDL_GetPerformanceFrequency();

    while (running)
    {
        last = now;
        now = SDL_GetPerformanceCounter();
        float dt = (float)((now - last) / freq);
        if (dt > 0.06f)
            dt = 0.06f;
        timePlayed += dt;

        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
                running = false;
        }

        const Uint8 *keys = SDL_GetKeyboardState(nullptr);
        if (keys[SDL_SCANCODE_ESCAPE])
            running = false;
        pauseToggleLock -= dt;
        if (keys[SDL_SCANCODE_P] && pauseToggleLock <= 0.0f)
        {
            paused = !paused;
            pauseToggleLock = 0.25f;
        }
        if (paused)
        {
            SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);
            continue;
        }

        for (auto &s : stars)
        {
            s.y += s.spd * dt;
            if (s.y >= SCREEN_H)
                s.y -= SCREEN_H;
        }

        bool thrusting = false;
        if (keys[SDL_SCANCODE_LEFT] || keys[SDL_SCANCODE_A])
            player.angle -= SHIP_TURN_SPEED * dt;
        if (keys[SDL_SCANCODE_RIGHT] || keys[SDL_SCANCODE_D])
            player.angle += SHIP_TURN_SPEED * dt;
        if (keys[SDL_SCANCODE_UP] || keys[SDL_SCANCODE_W])
        {
            player.vx += cosf(player.angle) * SHIP_THRUST * dt;
            player.vy += sinf(player.angle) * SHIP_THRUST * dt;
            thrusting = true;
        }

        float fireCooldown = (player.rapidTimer > 0.0f) ? FIRE_COOLDOWN_BASE * 0.5f : FIRE_COOLDOWN_BASE;
        player.fireTimer -= dt;
        if (player.fireTimer < 0.0f)
            player.fireTimer = 0.0f;
        if (keys[SDL_SCANCODE_SPACE] && player.fireTimer <= 0.0f)
        {
            Bullet b;
            float bx = cosf(player.angle), by = sinf(player.angle);
            b.x = player.x + bx * 16.0f;
            b.y = player.y + by * 16.0f;
            b.vx = player.vx + bx * BULLET_SPEED;
            b.vy = player.vy + by * BULLET_SPEED;
            b.px = b.x;
            b.py = b.y;
            bullets.push_back(b);
            player.fireTimer = fireCooldown;
        }

        player.vx *= SHIP_DRAG;
        player.vy *= SHIP_DRAG;
        player.x += player.vx * dt;
        player.y += player.vy * dt;
        wrap(player.x, player.y);
        if (player.shieldTimer > 0.0f)
            player.shieldTimer -= dt;
        if (player.rapidTimer > 0.0f)
            player.rapidTimer -= dt;

        enemySpawnEvery = std::max(0.8f, 2.0f - timePlayed * 0.02f);

        enemySpawnTimer += dt;
        if (enemySpawnTimer >= enemySpawnEvery)
        {
            enemySpawnTimer = 0.0f;
            int side = rand() % 4;
            float ex = 0.0f, ey = 0.0f;
            if (side == 0)
            {
                ex = 0.0f;
                ey = frand(0, (float)SCREEN_H);
            }
            if (side == 1)
            {
                ex = (float)SCREEN_W;
                ey = frand(0, (float)SCREEN_H);
            }
            if (side == 2)
            {
                ex = frand(0, (float)SCREEN_W);
                ey = 0.0f;
            }
            if (side == 3)
            {
                ex = frand(0, (float)SCREEN_W);
                ey = (float)SCREEN_H;
            }
            enemies.emplace_back(ex, ey);
        }

        powerupTimer += dt;
        if (powerupTimer >= 6.0f)
        {
            powerupTimer = 0.0f;
            PowerUpType t = (rand() % 2 == 0) ? PowerUpType::Shield : PowerUpType::RapidFire;
            powerups.emplace_back(frand(60.0f, SCREEN_W - 60.0f), frand(60.0f, SCREEN_H - 60.0f), t);
        }

        for (auto &en : enemies)
        {
            if (en.alive)
                en.update(dt, SCREEN_W, SCREEN_H);
        }

        for (auto &b : bullets)
        {
            if (!b.alive)
                continue;
            b.px = b.x;
            b.py = b.y;
            b.x += b.vx * dt;
            b.y += b.vy * dt;
            wrap(b.x, b.y);
            b.ttl -= dt;
            if (b.ttl <= 0.0f)
                b.alive = false;
        }

        for (auto &b : bullets)
        {
            if (!b.alive)
                continue;
            for (auto &en : enemies)
            {
                if (!en.alive)
                    continue;
                float dx = b.x - en.x, dy = b.y - en.y;
                if (length2(dx, dy) < en.radius + 3.0f)
                {
                    b.alive = false;
                    en.alive = false;
                    player.score += (en.type == EnemyType::Tank ? 80 : en.type == EnemyType::Spinner ? 60
                                                                                                     : 50);
                    particles.spawnExplosion(en.x, en.y, (en.type == EnemyType::Tank ? 30 : 22));
                    shakeTime = 0.15f;
                    shakeAmt = (en.type == EnemyType::Tank ? 6.0f : 4.0f);
                    if ((rand() % 5) == 0)
                    {
                        PowerUpType t = (rand() % 2 == 0) ? PowerUpType::Shield : PowerUpType::RapidFire;
                        powerups.emplace_back(en.x, en.y, t);
                    }
                    break;
                }
            }
        }

        for (auto &en : enemies)
        {
            if (!en.alive)
                continue;
            float dx = player.x - en.x, dy = player.y - en.y;
            if (length2(dx, dy) < en.radius + 10.0f)
            {
                en.alive = false;
                if (player.shieldTimer <= 0.0f)
                {
                    player.lives = std::max(0, player.lives - 1);
                    player.vx += dx * 2.0f;
                    player.vy += dy * 2.0f;
                    particles.spawnExplosion(player.x, player.y, 18);
                    shakeTime = 0.25f;
                    shakeAmt = 7.0f;
                }
            }
        }

        for (auto &pu : powerups)
        {
            if (!pu.alive)
                continue;
            float dx = player.x - pu.x, dy = player.y - pu.y;
            if (length2(dx, dy) < pu.radius + 12.0f)
            {
                pu.alive = false;
                if (pu.type == PowerUpType::Shield)
                    player.shieldTimer = 5.0f;
                if (pu.type == PowerUpType::RapidFire)
                    player.rapidTimer = 5.0f;
            }
        }

        bullets.erase(std::remove_if(bullets.begin(), bullets.end(), [](const Bullet &b)
                                     { return !b.alive; }),
                      bullets.end());
        enemies.erase(std::remove_if(enemies.begin(), enemies.end(), [](const Enemy &e)
                                     { return !e.alive; }),
                      enemies.end());
        powerups.erase(std::remove_if(powerups.begin(), powerups.end(), [](const PowerUp &p)
                                      { return !p.alive; }),
                       powerups.end());

        particles.update(dt, SCREEN_W, SCREEN_H);

        if (shakeTime > 0.0f)
        {
            shakeTime -= dt;
            if (shakeTime < 0.0f)
                shakeTime = 0.0f;
        }

        int ox = (shakeTime > 0.0f) ? (int)frand(-shakeAmt, shakeAmt) : 0;
        int oy = (shakeTime > 0.0f) ? (int)frand(-shakeAmt, shakeAmt) : 0;

        SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 32, 36, 46, 255);
        for (const auto &s : stars)
        {
            SDL_RenderDrawPoint(renderer, (int)s.x + ox, (int)s.y + oy);
        }

        SDL_SetRenderDrawColor(renderer, 240, 240, 180, 255);
        for (const auto &b : bullets)
        {
            SDL_Rect p{(int)b.x + ox, (int)b.y + oy, 3, 3};
            SDL_RenderFillRect(renderer, &p);
            SDL_SetRenderDrawColor(renderer, 200, 200, 160, 160);
            SDL_RenderDrawLine(renderer, (int)b.x + ox, (int)b.y + oy, (int)b.px + ox, (int)b.py + oy);
            SDL_SetRenderDrawColor(renderer, 240, 240, 180, 255);
        }

        for (auto &pu : powerups)
            pu.draw(renderer);
        for (auto &en : enemies)
            en.draw(renderer);

        drawShip(renderer, player, thrusting);
        drawHud(renderer, player);
        particles.draw(renderer);

        SDL_RenderPresent(renderer);

        if (player.lives <= 0)
        {
            SDL_Delay(700);
            player = Ship{};
            bullets.clear();
            enemies.clear();
            powerups.clear();
            timePlayed = 0.0f;
            enemySpawnEvery = 2.0f;
            shakeTime = 0.0f;
            shakeAmt = 0.0f;
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
