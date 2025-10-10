#pragma once
#include <SDL.h>
#include <vector>
#include <cmath>
#include <algorithm>

struct BossShot
{
    float x{}, y{}, vx{}, vy{}, ttl{5.0f};
    float spin{}, rad{2.0f};
    bool alive{true};
};

enum class BossPattern
{
    Aimed,
    Spread,
    Ring,
    Spiral
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

    void update(float dt, int w, int h, float tx, float ty);
    void draw(SDL_Renderer *r) const;

    void fireAt(float tx, float ty);

private:
    BossPattern pattern{BossPattern::Aimed};
    float patternTimer{0.0f};
    float patternCycle{8.0f};
    float windup{0.0f};
    float spiralAngle{0.0f};
    float moveT{0.0f};

    void selectPattern();
    void doMovement(float dt, int w, int h, float tx, float ty);
    void doShooting(float dt, float tx, float ty);
    void fireSpread(float baseAng, int count, float arcDeg, float speed);
    void fireRing(int count, float speed);
    static float angTo(float dx, float dy);
};
