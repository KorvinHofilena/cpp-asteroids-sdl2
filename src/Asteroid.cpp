#include "Asteroid.h"
#include <cmath>
#include <cstdlib>

static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }

Asteroid::Asteroid(float px, float py, float pvx, float pvy, AsteroidSize s)
{
    x = px;
    y = py;
    vx = pvx;
    vy = pvy;
    size = s;
    alive = true;
    radius = (size == AsteroidSize::Large) ? 28.0f : (size == AsteroidSize::Medium ? 18.0f : 12.0f);
}

void Asteroid::update(float dt, int w, int h)
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

void Asteroid::draw(SDL_Renderer *r) const
{

    int s = (int)(radius * 2.0f);
    SDL_Rect q{(int)(x - radius), (int)(y - radius), s, s};
    SDL_SetRenderDrawColor(r, 130, 140, 150, 255);
    SDL_RenderFillRect(r, &q);
    SDL_SetRenderDrawColor(r, 200, 210, 220, 255);
    SDL_RenderDrawRect(r, &q);
}

std::vector<Asteroid> Asteroid::split() const
{
    std::vector<Asteroid> out;
    if (size == AsteroidSize::Small)
        return out;
    AsteroidSize next = (size == AsteroidSize::Large) ? AsteroidSize::Medium : AsteroidSize::Small;
    for (int i = 0; i < 2; ++i)
    {
        float ang = frand(0.0f, 6.2831853f);
        float spd = (size == AsteroidSize::Large) ? frand(80.0f, 120.0f) : frand(120.0f, 160.0f);
        out.emplace_back(x, y, std::cos(ang) * spd, std::sin(ang) * spd, next);
    }
    return out;
}
