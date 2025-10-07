#include "PopupText.h"
#include "TextMini.h"
#include <algorithm>

void PopupTextSystem::spawn(float x, float y, const std::string &t, Uint8 R, Uint8 G, Uint8 B)
{
    PopupText p;
    p.x = x;
    p.y = y;
    p.text = t;
    p.r = R;
    p.g = G;
    p.b = B;
    p.a = 255;
    p.ttl = 0.9f;
    p.vy = -45.0f;
    p.alive = true;
    list_.push_back(p);
}

void PopupTextSystem::update(float dt)
{
    for (auto &p : list_)
    {
        if (!p.alive)
            continue;
        p.y += p.vy * dt;
        p.ttl -= dt;
        if (p.ttl <= 0.0f)
        {
            p.alive = false;
        }
        else if (p.a > 12)
        {
            p.a = (Uint8)(p.a * 0.92f);
        }
        else
        {
            p.a = 0;
        }
    }
    list_.erase(std::remove_if(list_.begin(), list_.end(), [](const PopupText &p)
                               { return !p.alive; }),
                list_.end());
}

void PopupTextSystem::draw(SDL_Renderer *r) const
{
    for (const auto &p : list_)
    {
        drawMiniText(r, (int)p.x, (int)p.y, p.text, p.r, p.g, p.b, p.a, 2);
    }
}
