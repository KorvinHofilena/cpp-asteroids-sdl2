#ifndef POWERUP_H
#define POWERUP_H

#include <SDL.h>

enum class PowerUpType
{
    Shield,
    RapidFire
};

class PowerUp
{
public:
    float x{}, y{}, radius{10.0f};
    PowerUpType type{PowerUpType::Shield};
    bool alive{true};

    PowerUp(float px, float py, PowerUpType t);
    void update(float dt, int w, int h);
    void draw(SDL_Renderer *r) const;
};

#endif
