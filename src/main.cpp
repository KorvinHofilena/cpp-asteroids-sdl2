#include <SDL.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

#include "Enemy.h"
#include "Particle.h"
#include "PowerUp.h"
#include "Asteroid.h"
#include "PopupText.h"
#include "Boss.h"

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

enum class GameState
{
    Playing,
    GameOver
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

static void spawnEdgeAsteroid(std::vector<Asteroid> &asteroids)
{
    float side = (float)(rand() % 4);
    float ax = (side < 1.0f) ? 0.0f : (side < 2.0f ? (float)SCREEN_W : frand(0, (float)SCREEN_W));
    float ay = (side < 1.0f) ? frand(0, (float)SCREEN_H) : (side < 2.0f ? frand(0, (float)SCREEN_H) : ((side < 3.0f) ? 0.0f : (float)SCREEN_H));
    float ang = frand(0.0f, 6.2831853f);
    float spd = frand(60.0f, 120.0f);
    asteroids.emplace_back(ax, ay, std::cos(ang) * spd, std::sin(ang) * spd, AsteroidSize::Large);
}

static void spawnInitialAsteroids(std::vector<Asteroid> &asteroids, int n)
{
    for (int i = 0; i < n; ++i)
        spawnEdgeAsteroid(asteroids);
}

static void resetRound(Ship &player, std::vector<Bullet> &bullets, std::vector<Enemy> &enemies, std::vector<PowerUp> &powerups, std::vector<Asteroid> &asteroids, ParticleSystem &particles, PopupTextSystem &popups, float &timePlayed, float &enemySpawnEvery, float &shakeTime, float &shakeAmt, GameState &state, Boss &boss, bool &bossActive, float &bossNextAt)
{
    player = Ship{};
    bullets.clear();
    enemies.clear();
    powerups.clear();
    asteroids.clear();
    particles = ParticleSystem{};
    popups = PopupTextSystem{};
    timePlayed = 0.0f;
    enemySpawnEvery = 2.0f;
    shakeTime = 0.0f;
    shakeAmt = 0.0f;
    spawnInitialAsteroids(asteroids, 6);
    state = GameState::Playing;
    boss = Boss();
    bossActive = false;
    bossNextAt = 5.0f;
}

int main(int, char **)
{
    std::srand((unsigned)std::time(nullptr));
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        std::printf("SDL_Init error: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window *window = SDL_CreateWindow("Asteroids++ (SDL2)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);
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
    std::vector<Asteroid> asteroids;
    ParticleSystem particles;
    PopupTextSystem popups;

    std::vector<Star> stars;
    for (int i = 0; i < 150; ++i)
        stars.push_back({frand(0, (float)SCREEN_W), frand(0, (float)SCREEN_H), frand(10.0f, 26.0f)});

    float enemySpawnTimer = 0.0f, enemySpawnEvery = 2.0f, powerupTimer = 0.0f;
    float timePlayed = 0.0f, shakeTime = 0.0f, shakeAmt = 0.0f, pauseLock = 0.0f;
    bool running = true, paused = false;
    GameState state = GameState::Playing;

    spawnInitialAsteroids(asteroids, 6);

    Boss boss;
    bool bossActive = false;
    float bossNextAt = 5.0f;

    Uint64 now = SDL_GetPerformanceCounter(), last = now;
    double freq = (double)SDL_GetPerformanceFrequency();

    while (running)
    {
        last = now;
        now = SDL_GetPerformanceCounter();
        float dt = (float)((now - last) / freq);
        if (dt > 0.06f)
            dt = 0.06f;
        if (state == GameState::Playing)
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

        static bool bLatch = false;
        bool bDown = keys[SDL_SCANCODE_B] != 0;
        if (!bLatch && bDown && state == GameState::Playing && !bossActive)
        {
            boss = Boss(SCREEN_W * 0.5f, 140.0f);
            boss.vx = 0.0f;
            boss.vy = 0.0f;
            boss.hp = 5;
            boss.maxHp = 5;
            boss.fireInterval = 0.45f;
            bossActive = true;
            popups.spawn(SCREEN_W * 0.5f, 80, "BOSS INCOMING", 255, 100, 140);
        }
        bLatch = bDown;

        pauseLock -= dt;
        if (keys[SDL_SCANCODE_P] && pauseLock <= 0.0f)
        {
            paused = !paused;
            pauseLock = 0.25f;
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

        if (state == GameState::Playing)
        {
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

            if (!bossActive && timePlayed >= bossNextAt)
            {
                float side = (float)(rand() % 4);
                float bx = (side < 1.0f) ? 0.0f : (side < 2.0f ? (float)SCREEN_W : frand(0, (float)SCREEN_W));
                float by = (side < 1.0f) ? frand(0, (float)SCREEN_H) : (side < 2.0f ? frand(0, (float)SCREEN_H) : ((side < 3.0f) ? 0.0f : (float)SCREEN_H));
                boss = Boss(bx, by);
                float ang = frand(0.0f, 6.2831853f);
                float spd = frand(30.0f, 60.0f);
                boss.vx = std::cos(ang) * spd;
                boss.vy = std::sin(ang) * spd;
                boss.hp = 20;
                boss.maxHp = 20;
                boss.fireInterval = 0.55f;
                bossActive = true;
                popups.spawn(SCREEN_W * 0.5f, 80, "BOSS INCOMING", 255, 100, 140);
            }

            enemySpawnEvery = std::max(0.8f, 2.0f - timePlayed * 0.02f);
            enemySpawnTimer += dt;
            if (enemySpawnTimer >= enemySpawnEvery && !bossActive)
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
                if (en.alive)
                    en.update(dt, SCREEN_W, SCREEN_H);
            for (auto &a : asteroids)
                if (a.alive)
                    a.update(dt, SCREEN_W, SCREEN_H);
            if (bossActive)
                boss.update(dt, SCREEN_W, SCREEN_H, player.x, player.y);

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
                        int add = (en.type == EnemyType::Tank ? 80 : en.type == EnemyType::Spinner ? 60
                                                                                                   : 50);
                        player.score += add;
                        popups.spawn(en.x, en.y, std::string("+") + std::to_string(add), 255, 220, 120);
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

            for (auto &b : bullets)
            {
                if (!b.alive)
                    continue;
                for (auto &a : asteroids)
                {
                    if (!a.alive)
                        continue;
                    float dx = b.x - a.x, dy = b.y - a.y;
                    if (length2(dx, dy) < a.radius + 3.0f)
                    {
                        b.alive = false;
                        a.alive = false;
                        int add = (a.size == AsteroidSize::Large ? 40 : a.size == AsteroidSize::Medium ? 30
                                                                                                       : 20);
                        player.score += add;
                        popups.spawn(a.x, a.y, std::string("+") + std::to_string(add), 200, 245, 255);
                        particles.spawnExplosion(a.x, a.y, (a.size == AsteroidSize::Large ? 28 : a.size == AsteroidSize::Medium ? 20
                                                                                                                                : 14));
                        shakeTime = 0.12f;
                        shakeAmt = (a.size == AsteroidSize::Large ? 5.0f : 3.5f);
                        auto kids = a.split();
                        asteroids.insert(asteroids.end(), kids.begin(), kids.end());
                        break;
                    }
                }
            }

            if (bossActive)
            {
                for (auto &b : bullets)
                {
                    if (!b.alive || !boss.alive)
                        continue;
                    float dx = b.x - boss.x, dy = b.y - boss.y;
                    if (length2(dx, dy) < boss.radius + 3.0f)
                    {
                        b.alive = false;
                        boss.hp -= 1;
                        player.score += 15;
                        popups.spawn(boss.x, boss.y, "+15", 255, 160, 180);
                        if (boss.hp <= 0)
                        {
                            boss.alive = false;
                            bossActive = false;
                            player.score += 1000;
                            popups.spawn(boss.x, boss.y, "BOSS DEFEATED +1000", 255, 120, 180);
                            particles.spawnExplosion(boss.x, boss.y, 40);
                            for (int i = 0; i < 3; ++i)
                            {
                                PowerUpType t = (rand() % 2 == 0) ? PowerUpType::Shield : PowerUpType::RapidFire;
                                powerups.emplace_back(boss.x + frand(-20, 20), boss.y + frand(-20, 20), t);
                            }
                            shakeTime = 0.5f;
                            shakeAmt = 10.0f;
                            bossNextAt += 20.0f;
                            break;
                        }
                    }
                }
                if (boss.alive)
                {
                    for (auto &s : boss.shots)
                    {
                        if (!s.alive)
                            continue;
                        float dx = player.x - s.x, dy = player.y - s.y;
                        if (length2(dx, dy) < 12.0f)
                        {
                            s.alive = false;
                            if (player.shieldTimer <= 0.0f)
                            {
                                player.lives = std::max(0, player.lives - 1);
                                particles.spawnExplosion(player.x, player.y, 18);
                                shakeTime = 0.25f;
                                shakeAmt = 7.0f;
                            }
                        }
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

            for (auto &a : asteroids)
            {
                if (!a.alive)
                    continue;
                float dx = player.x - a.x, dy = player.y - a.y;
                if (length2(dx, dy) < a.radius + 10.0f)
                {
                    a.alive = false;
                    if (player.shieldTimer <= 0.0f)
                    {
                        player.lives = std::max(0, player.lives - 1);
                        particles.spawnExplosion(player.x, player.y, 20);
                        auto kids = a.split();
                        asteroids.insert(asteroids.end(), kids.begin(), kids.end());
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
            asteroids.erase(std::remove_if(asteroids.begin(), asteroids.end(), [](const Asteroid &a)
                                           { return !a.alive; }),
                            asteroids.end());
            if (bossActive)
                boss.shots.erase(std::remove_if(boss.shots.begin(), boss.shots.end(), [](const BossShot &s)
                                                { return !s.alive; }),
                                 boss.shots.end());

            particles.update(dt, SCREEN_W, SCREEN_H);
            popups.update(dt);

            if (player.lives <= 0)
                state = GameState::GameOver;

            SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
            SDL_RenderClear(renderer);

            int ox = 0, oy = 0;
            if (shakeTime > 0.0f)
            {
                shakeTime -= dt;
                if (shakeTime < 0.0f)
                    shakeTime = 0.0f;
                ox = (int)frand(-shakeAmt, shakeAmt);
                oy = (int)frand(-shakeAmt, shakeAmt);
            }

            SDL_SetRenderDrawColor(renderer, 32, 36, 46, 255);
            for (const auto &s : stars)
                SDL_RenderDrawPoint(renderer, (int)s.x + ox, (int)s.y + oy);

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
            for (auto &a : asteroids)
                a.draw(renderer);
            if (bossActive)
                boss.draw(renderer);

            bool thrustingDraw = (SDL_GetKeyboardState(nullptr)[SDL_SCANCODE_UP] || SDL_GetKeyboardState(nullptr)[SDL_SCANCODE_W]);
            drawShip(renderer, player, thrustingDraw);
            drawHud(renderer, player);
            particles.draw(renderer);
            popups.draw(renderer);

            SDL_RenderPresent(renderer);

            if (player.lives <= 0)
            {
                SDL_Delay(300);
                state = GameState::GameOver;
            }
        }
        else
        {
            SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
            SDL_RenderClear(renderer);

            for (const auto &s : stars)
            {
                SDL_SetRenderDrawColor(renderer, 32, 36, 46, 255);
                SDL_RenderDrawPoint(renderer, (int)s.x, (int)s.y);
            }
            for (auto &a : asteroids)
            {
                a.draw(renderer);
            }
            for (auto &en : enemies)
            {
                en.draw(renderer);
            }
            for (auto &pu : powerups)
            {
                pu.draw(renderer);
            }
            if (bossActive)
            {
                boss.draw(renderer);
            }
            drawShip(renderer, player, false);
            drawHud(renderer, player);
            particles.draw(renderer);
            popups.draw(renderer);

            SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 160);
            SDL_Rect f{0, 0, SCREEN_W, SCREEN_H};
            SDL_RenderFillRect(renderer, &f);
            int bw = 360, bh = 140;
            SDL_Rect box{(SCREEN_W - bw) / 2, (SCREEN_H - bh) / 2, bw, bh};
            SDL_SetRenderDrawColor(renderer, 24, 28, 36, 240);
            SDL_RenderFillRect(renderer, &box);
            SDL_SetRenderDrawColor(renderer, 90, 200, 255, 255);
            SDL_RenderDrawRect(renderer, &box);
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            int sx = box.x + 40;
            int sy = box.y + 40;
            extern void drawMiniText(SDL_Renderer *, int, int, const std::string &, Uint8, Uint8, Uint8, Uint8, int);
            char buf[32];
            std::snprintf(buf, sizeof(buf), "+%d", player.score);
            drawMiniText(renderer, sx, sy, buf, 255, 255, 255, 255, 3);
            drawMiniText(renderer, box.x + 40, box.y + 90, "PRESS", 200, 220, 255, 230, 2);
            drawMiniText(renderer, box.x + 40 + 6 * 2 * 6, box.y + 90, "R", 200, 220, 255, 230, 2);
            drawMiniText(renderer, box.x + 40 + 6 * 2 * 7, box.y + 90, " TO", 200, 220, 255, 230, 2);
            drawMiniText(renderer, box.x + 40 + 6 * 2 * 10, box.y + 90, " RESTART", 200, 220, 255, 230, 2);

            SDL_RenderPresent(renderer);

            if (keys[SDL_SCANCODE_RETURN] || keys[SDL_SCANCODE_R])
                resetRound(player, bullets, enemies, powerups, asteroids, particles, popups, timePlayed, enemySpawnEvery, shakeTime, shakeAmt, state, boss, bossActive, bossNextAt);
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
