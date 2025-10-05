#include "Particle.h"
#include <cmath>
#include <cstdlib>
#include <algorithm>

static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }

void ParticleSystem::spawnExplosion(float x, float y, int count)
{
    for (int i = 0; i < count; ++i)
    {
        float ang = frand(0.0f, 6.2831853f);
        float spd = frand(60.0f, 220.0f);
        Particle p;
        p.x = x;
        p.y = y;
        p.vx = std::cos(ang) * spd;
        p.vy = std::sin(ang) * spd;
        p.ttl = frand(0.25f, 0.6f);
        p.r = 255;
        p.g = (Uint8)frand(80, 200);
        p.b = 60;
        p.a = 255;
        p.alive = true;
        p_.push_back(p);
    }
}

void ParticleSystem::update(float dt, int w, int h)
{
    for (auto &p : p_)
    {
        if (!p.alive)
            continue;
        p.x += p.vx * dt;
        p.y += p.vy * dt;
        p.vx *= 0.98f;
        p.vy *= 0.98f;
        p.ttl -= dt;
        if (p.ttl <= 0.0f)
            p.alive = false;
        if (p.x < 0)
            p.x += w;
        if (p.x >= w)
            p.x -= w;
        if (p.y < 0)
            p.y += h;
        if (p.y >= h)
            p.y -= h;
        if (p.a > 8)
            p.a = (Uint8)(p.a * 0.9f);
        else
            p.a = 0;
    }
    p_.erase(std::remove_if(p_.begin(), p_.end(), [](const Particle &p)
                            { return !p.alive; }),
             p_.end());
}

void ParticleSystem::draw(SDL_Renderer *r) const
{
    for (const auto &p : p_)
    {
        SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_BLEND);
        SDL_SetRenderDrawColor(r, p.r, p.g, p.b, p.a);
        SDL_Rect q{(int)p.x, (int)p.y, 2, 2};
        SDL_RenderFillRect(r, &q);
    }
}
