#include "Enemy.h"
#include <cmath>
#include <cstdlib>

static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }

Enemy::Enemy(float startX, float startY)
{
    x = startX;
    y = startY;
    float spd = frand(40.0f, 100.0f);
    float ang = frand(0.0f, 6.2831853f);
    vx = std::cos(ang) * spd;
    vy = std::sin(ang) * spd;
    alive = true;
}

void Enemy::update(float dt, int w, int h)
{
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
    int size = (int)(radius * 2.0f);
    SDL_Rect q{(int)(x - radius), (int)(y - radius), size, size};
    SDL_SetRenderDrawColor(r, 220, 40, 40, 255);
    SDL_RenderFillRect(r, &q);
    SDL_SetRenderDrawColor(r, 255, 200, 200, 255);
    SDL_RenderDrawRect(r, &q);
}
