#pragma once
#include <SDL.h>
#include <vector>
#include <cmath>

struct BossShot
{
    float x{}, y{}, vx{}, vy{}, ttl{5.0f};
    bool alive{true};
};

class Boss
{
public:
    float x{}, y{}, vx{}, vy{};
    float radius{34.0f};
    int hp{20}, maxHp{20};
    bool alive{false};
    float fireTimer{0.0f};
    float fireInterval{0.6f};
    std::vector<BossShot> shots;

    Boss() {}
    Boss(float ix, float iy) : x(ix), y(iy) { alive = true; }

    void fireAt(float tx, float ty)
    {
        float dx = tx - x, dy = ty - y;
        float d = std::sqrt(dx * dx + dy * dy);
        if (d < 0.001f)
            d = 0.001f;
        float spd = 160.0f;
        BossShot s;
        s.x = x;
        s.y = y;
        s.vx = dx / d * spd;
        s.vy = dy / d * spd;
        shots.push_back(s);
    }

    void update(float dt, int w, int h, float tx, float ty)
    {
        if (!alive)
            return;
        x += vx * dt;
        y += vy * dt;
        if (x < -radius)
            x = w + radius;
        if (x > w + radius)
            x = -radius;
        if (y < -radius)
            y = h + radius;
        if (y > h + radius)
            y = -radius;
        fireTimer -= dt;
        if (fireTimer <= 0.0f)
        {
            fireTimer = fireInterval;
            fireAt(tx, ty);
        }
        for (auto &s : shots)
        {
            if (!s.alive)
                continue;
            s.x += s.vx * dt;
            s.y += s.vy * dt;
            s.ttl -= dt;
            if (s.ttl <= 0.0f)
                s.alive = false;
            if (s.x < -20 || s.x > w + 20 || s.y < -20 || s.y > h + 20)
                s.alive = false;
        }
        shots.erase(std::remove_if(shots.begin(), shots.end(), [](const BossShot &b)
                                   { return !b.alive; }),
                    shots.end());
    }

    void draw(SDL_Renderer *r) const
    {
        if (!alive)
            return;
        SDL_SetRenderDrawColor(r, 220, 90, 120, 255);
        int segs = 18;
        for (int i = 0; i < segs; i++)
        {
            float t1 = (i / (float)segs) * 6.2831853f;
            float t2 = ((i + 1) / (float)segs) * 6.2831853f;
            float x1 = x + std::cos(t1) * radius;
            float y1 = y + std::sin(t1) * radius;
            float x2 = x + std::cos(t2) * radius;
            float y2 = y + std::sin(t2) * radius;
            SDL_RenderDrawLine(r, (int)x1, (int)y1, (int)x2, (int)y2);
        }
        SDL_SetRenderDrawColor(r, 255, 180, 200, 255);
        SDL_RenderDrawLine(r, (int)x, (int)(y - radius * 0.6f), (int)x, (int)(y + radius * 0.6f));
        SDL_RenderDrawLine(r, (int)(x - radius * 0.6f), (int)y, (int)(x + radius * 0.6f), (int)y);
        SDL_SetRenderDrawColor(r, 255, 140, 160, 255);
        for (const auto &s : shots)
        {
            if (!s.alive)
                continue;
            SDL_Rect p{(int)s.x - 2, (int)s.y - 2, 4, 4};
            SDL_RenderFillRect(r, &p);
        }
    }
};
