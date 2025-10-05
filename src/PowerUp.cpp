#include "PowerUp.h"
#include <cmath>

PowerUp::PowerUp(float px, float py, PowerUpType t)
{
    x = px;
    y = py;
    type = t;
    alive = true;
}

void PowerUp::update(float, int w, int h)
{
    if (x < 0)
        x += w;
    if (x >= w)
        x -= w;
    if (y < 0)
        y += h;
    if (y >= h)
        y -= h;
}

void PowerUp::draw(SDL_Renderer *r) const
{
    Uint8 R = 120, G = 220, B = 255;
    if (type == PowerUpType::Shield)
    {
        R = 90;
        G = 200;
        B = 255;
    }
    if (type == PowerUpType::RapidFire)
    {
        R = 255;
        G = 180;
        B = 60;
    }

    SDL_SetRenderDrawColor(r, R, G, B, 255);
    SDL_Rect d{(int)(x - radius), (int)(y - radius), (int)(radius * 2), (int)(radius * 2)};
    SDL_RenderFillRect(r, &d);
    SDL_SetRenderDrawColor(r, 255, 255, 255, 255);
    SDL_RenderDrawRect(r, &d);
}
