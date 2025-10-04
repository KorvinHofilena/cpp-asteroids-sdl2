#include "Enemy.h"
#include <cstdlib>

static float frand(float a, float b)
{
    return a + (b - a) * (float(rand()) / float(RAND_MAX));
}

Enemy::Enemy(float startX, float startY)
{
    x = startX;
    y = startY;

    float speed = frand(40.0f, 100.0f);
    float angle = frand(0.0f, 6.2831853f);
    vx = speed * cosf(angle);
    vy = speed * sinf(angle);

    alive = true;
}

void Enemy::update(float dt, int screenW, int screenH)
{
    x += vx * dt;
    y += vy * dt;

    if (x < 0)
        x += screenW;
    if (x >= screenW)
        x -= screenW;
    if (y < 0)
        y += screenH;
    if (y >= screenH)
        y -= screenH;
}

void Enemy::draw(SDL_Renderer *renderer) const
{

    int size = (int)(radius * 2.0f);
    SDL_Rect r{(int)(x - radius), (int)(y - radius), size, size};

    SDL_SetRenderDrawColor(renderer, 220, 40, 40, 255);
    SDL_RenderFillRect(renderer, &r);

    SDL_SetRenderDrawColor(renderer, 255, 200, 200, 255);
    SDL_RenderDrawRect(renderer, &r);
}
