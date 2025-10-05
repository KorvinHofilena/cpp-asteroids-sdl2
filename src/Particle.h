#ifndef PARTICLE_H
#define PARTICLE_H

#include <SDL.h>
#include <vector>

struct Particle
{
    float x, y, vx, vy, ttl;
    Uint8 r, g, b, a;
    bool alive;
};

class ParticleSystem
{
public:
    void spawnExplosion(float x, float y, int count);
    void update(float dt, int w, int h);
    void draw(SDL_Renderer *r) const;

private:
    std::vector<Particle> p_;
};

#endif
