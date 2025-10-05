#include "Enemy.h"
#include <cmath>
#include <cstdlib>

static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }

Enemy::Enemy(float startX, float startY)
{
    x = startX;
    y = startY;

    int r = rand() % 3;
    if (r == 0)
        type = EnemyType::Scout;
    if (r == 1)
        type = EnemyType::Tank;
    if (r == 2)
        type = EnemyType::Spinner;

    float baseSpeed = (type == EnemyType::Scout) ? 120.0f : (type == EnemyType::Tank ? 60.0f : 90.0f);
    float spd = frand(baseSpeed * 0.8f, baseSpeed * 1.2f);
    float ang = frand(0.0f, 6.2831853f);
    vx = std::cos(ang) * spd;
    vy = std::sin(ang) * spd;

    radius = (type == EnemyType::Scout) ? 10.0f : (type == EnemyType::Tank ? 18.0f : 14.0f);
    alive = true;
}

void Enemy::update(float dt, int w, int h)
{
    if (type == EnemyType::Spinner)
    {
        float ang = 1.5f * dt;
        float nx = vx * std::cos(ang) - vy * std::sin(ang);
        float ny = vx * std::sin(ang) + vy * std::cos(ang);
        vx = nx;
        vy = ny;
    }
    x += vx * dt;
    y += vy * dt;
    if (x < 0)
        x += w;
    if (x >= w)
        x -= w;
    if (y < 0)
        y += h;
    if (y >= h)
        y -= h;
}

void Enemy::draw(SDL_Renderer *r) const
{
    Uint8 R = 220, G = 40, B = 40;
    if (type == EnemyType::Tank)
    {
        R = 255;
        G = 90;
        B = 90;
    }
    if (type == EnemyType::Spinner)
    {
        R = 255;
        G = 170;
        B = 60;
    }

    int size = (int)(radius * 2.0f);
    SDL_Rect q{(int)(x - radius), (int)(y - radius), size, size};
    SDL_SetRenderDrawColor(r, R, G, B, 255);
    SDL_RenderFillRect(r, &q);
    SDL_SetRenderDrawColor(r, 255, 240, 240, 255);
    SDL_RenderDrawRect(r, &q);
}
