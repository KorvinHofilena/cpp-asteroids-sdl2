#ifndef ASTEROID_H
#define ASTEROID_H

#include <SDL.h>
#include <vector>

enum class AsteroidSize
{
    Large,
    Medium,
    Small
};

class Asteroid
{
public:
    float x{}, y{}, vx{}, vy{};
    float radius{24.0f};
    AsteroidSize size{AsteroidSize::Large};
    bool alive{true};

    Asteroid(float px, float py, float pvx, float pvy, AsteroidSize s);
    void update(float dt, int w, int h);
    void draw(SDL_Renderer *r) const;

    std::vector<Asteroid> split() const;
};

#endif
