#include <SDL.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "Enemy.h"

static const int SCREEN_W = 800;
static const int SCREEN_H = 600;
static const float SHIP_TURN_SPEED = 3.5f;
static const float SHIP_THRUST = 200.0f;
static const float SHIP_DRAG = 0.98f;
static const float BULLET_SPEED = 420.0f;
static const float BULLET_TTL = 1.2f;
static const float FIRE_COOLDOWN = 0.18f;

struct Bullet
{
    float x{};
    float y{};
    float vx{};
    float vy{};
    float ttl{BULLET_TTL};
    bool alive{true};
};

struct Ship
{
    float x{SCREEN_W * 0.5f};
    float y{SCREEN_H * 0.5f};
    float angle{-3.14159f / 2.0f};
    float vx{0};
    float vy{0};
    int lives{3};
    int score{0};

    float fireTimer{0.0f};
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

static void drawShip(SDL_Renderer *r, const Ship &s)
{
    float noseX = s.x + cosf(s.angle) * 14.0f;
    float noseY = s.y + sinf(s.angle) * 14.0f;
    float leftX = s.x + cosf(s.angle + 2.5f) * 12.0f;
    float leftY = s.y + sinf(s.angle + 2.5f) * 12.0f;
    float rightX = s.x + cosf(s.angle - 2.5f) * 12.0f;
    float rightY = s.y + sinf(s.angle - 2.5f) * 12.0f;

    SDL_SetRenderDrawColor(r, 230, 230, 230, 255);
    SDL_RenderDrawLine(r, (int)noseX, (int)noseY, (int)leftX, (int)leftY);
    SDL_RenderDrawLine(r, (int)leftX, (int)leftY, (int)rightX, (int)rightY);
    SDL_RenderDrawLine(r, (int)rightX, (int)rightY, (int)noseX, (int)noseY);
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

    int maxBar = 200;
    int bar = std::min(s.score, 1000) * maxBar / 1000;
    SDL_Rect scoreBg{SCREEN_W - maxBar - 20, 10, maxBar, 10};
    SDL_Rect scoreFg{SCREEN_W - maxBar - 20, 10, bar, 10};
    SDL_SetRenderDrawColor(r, 60, 60, 60, 255);
    SDL_RenderFillRect(r, &scoreBg);
    SDL_SetRenderDrawColor(r, 120, 255, 120, 255);
    SDL_RenderFillRect(r, &scoreFg);
}

static float length2(float dx, float dy) { return std::sqrt(dx * dx + dy * dy); }

int main(int, char **)
{
    std::srand((unsigned)std::time(nullptr));

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        std::printf("SDL_Init error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow(
        "Asteroids + Enemies (SDL2)",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);

    if (!window)
    {
        std::printf("SDL_CreateWindow error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

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

    float enemySpawnTimer = 0.0f;
    float enemySpawnEvery = 2.0f;

    bool running = true;
    Uint64 now = SDL_GetPerformanceCounter();
    Uint64 last = now;
    double freq = (double)SDL_GetPerformanceFrequency();

    while (running)
    {
        last = now;
        now = SDL_GetPerformanceCounter();
        float dt = (float)((now - last) / freq);
        if (dt > 0.06f)
            dt = 0.06f;

        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
                running = false;
        }

        const Uint8 *keys = SDL_GetKeyboardState(nullptr);
        if (keys[SDL_SCANCODE_ESCAPE])
            running = false;

        if (keys[SDL_SCANCODE_LEFT] || keys[SDL_SCANCODE_A])
        {
            player.angle -= SHIP_TURN_SPEED * dt;
        }
        if (keys[SDL_SCANCODE_RIGHT] || keys[SDL_SCANCODE_D])
        {
            player.angle += SHIP_TURN_SPEED * dt;
        }
        if (keys[SDL_SCANCODE_UP] || keys[SDL_SCANCODE_W])
        {
            player.vx += cosf(player.angle) * SHIP_THRUST * dt;
            player.vy += sinf(player.angle) * SHIP_THRUST * dt;
        }

        player.fireTimer -= dt;
        if (player.fireTimer < 0.0f)
            player.fireTimer = 0.0f;

        if (keys[SDL_SCANCODE_SPACE] && player.fireTimer <= 0.0f)
        {
            Bullet b;
            float bx = cosf(player.angle);
            float by = sinf(player.angle);
            b.x = player.x + bx * 16.0f;
            b.y = player.y + by * 16.0f;
            b.vx = player.vx + bx * BULLET_SPEED;
            b.vy = player.vy + by * BULLET_SPEED;
            b.ttl = BULLET_TTL;
            b.alive = true;
            bullets.push_back(b);
            player.fireTimer = FIRE_COOLDOWN;
        }

        player.vx *= SHIP_DRAG;
        player.vy *= SHIP_DRAG;
        player.x += player.vx * dt;
        player.y += player.vy * dt;
        wrap(player.x, player.y);

        enemySpawnTimer += dt;
        if (enemySpawnTimer >= enemySpawnEvery)
        {
            enemySpawnTimer = 0.0f;

            int side = rand() % 4;
            float ex = 0.0f, ey = 0.0f;
            switch (side)
            {
            case 0:
                ex = 0.0f;
                ey = (float)(rand() % SCREEN_H);
                break;
            case 1:
                ex = (float)SCREEN_W;
                ey = (float)(rand() % SCREEN_H);
                break;
            case 2:
                ex = (float)(rand() % SCREEN_W);
                ey = 0.0f;
                break;
            case 3:
                ex = (float)(rand() % SCREEN_W);
                ey = (float)SCREEN_H;
                break;
            }
            enemies.emplace_back(ex, ey);
        }

        for (auto &en : enemies)
        {
            if (!en.alive)
                continue;
            en.update(dt, SCREEN_W, SCREEN_H);
        }

        for (auto &b : bullets)
        {
            if (!b.alive)
                continue;
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
                float dx = b.x - en.x;
                float dy = b.y - en.y;
                if (length2(dx, dy) < en.radius + 2.0f)
                {
                    b.alive = false;
                    en.alive = false;
                    player.score += 50;
                    break;
                }
            }
        }

        for (auto &en : enemies)
        {
            if (!en.alive)
                continue;
            float dx = player.x - en.x;
            float dy = player.y - en.y;
            if (length2(dx, dy) < en.radius + 10.0f)
            {
                en.alive = false;
                player.lives = std::max(0, player.lives - 1);
                player.vx += dx * 2.0f;
                player.vy += dy * 2.0f;
            }
        }

        bullets.erase(std::remove_if(bullets.begin(), bullets.end(),
                                     [](const Bullet &b)
                                     { return !b.alive; }),
                      bullets.end());
        enemies.erase(std::remove_if(enemies.begin(), enemies.end(),
                                     [](const Enemy &e)
                                     { return !e.alive; }),
                      enemies.end());

        SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 240, 240, 180, 255);
        for (auto &b : bullets)
        {
            SDL_Rect p{(int)b.x, (int)b.y, 2, 2};
            SDL_RenderFillRect(renderer, &p);
        }

        for (auto &en : enemies)
        {
            en.draw(renderer);
        }

        drawShip(renderer, player);
        drawHud(renderer, player);

        SDL_RenderPresent(renderer);

        if (player.lives <= 0)
        {
            SDL_Delay(1000);

            player = Ship{};
            bullets.clear();
            enemies.clear();
            enemySpawnTimer = 0.0f;
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
