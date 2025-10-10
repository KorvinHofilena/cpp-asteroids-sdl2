#include "Boss.h"

static float frand(float a, float b) { return a + (b - a) * (float(rand()) / float(RAND_MAX)); }
static void wrap(float &x, float &y, int w, int h)
{
    if (x < -400.f)
        x += (w + 800.f);
    if (x > w + 400.f)
        x -= (w + 800.f);
    if (y < -400.f)
        y += (h + 800.f);
    if (y > h + 400.f)
        y -= (h + 800.f);
}

float Boss::angTo(float dx, float dy) { return std::atan2(dy, dx); }

void Boss::fireAt(float tx, float ty)
{
    float dx = tx - x, dy = ty - y;
    float d = std::sqrt(dx * dx + dy * dy);
    if (d < 0.001f)
        d = 0.001f;
    float spd = 180.0f;
    BossShot s;
    s.x = x;
    s.y = y;
    s.vx = dx / d * spd;
    s.vy = dy / d * spd;
    s.ttl = 5.0f;
    shots.push_back(s);
}

void Boss::fireSpread(float baseAng, int count, float arcDeg, float speed)
{
    if (count <= 1)
    {
        BossShot s{x, y, std::cos(baseAng) * speed, std::sin(baseAng) * speed, 5.0f, 0.0f, 2.0f, true};
        shots.push_back(s);
        return;
    }
    float arc = arcDeg * 3.14159265f / 180.f;
    float start = baseAng - arc * 0.5f;
    float step = arc / (count - 1);
    for (int i = 0; i < count; ++i)
    {
        float a = start + step * i;
        BossShot s{x, y, std::cos(a) * speed, std::sin(a) * speed, 4.5f, 0.0f, 2.0f, true};
        shots.push_back(s);
    }
}

void Boss::fireRing(int count, float speed)
{
    for (int i = 0; i < count; ++i)
    {
        float a = (i / float(count)) * 6.2831853f;
        BossShot s{x, y, std::cos(a) * speed, std::sin(a) * speed, 4.0f, 0.0f, 2.0f, true};
        shots.push_back(s);
    }
}

void Boss::selectPattern()
{
    float hpPct = (maxHp > 0) ? (float)hp / (float)maxHp : 0.f;
    if (hpPct > 0.7f)
        pattern = BossPattern::Aimed;
    else if (hpPct > 0.4f)
        pattern = BossPattern::Spread;
    else if (hpPct > 0.2f)
        pattern = BossPattern::Ring;
    else
        pattern = BossPattern::Spiral;
    patternTimer = patternCycle;
    windup = 0.6f;
}

void Boss::doMovement(float dt, int w, int h, float tx, float ty)
{
    moveT += dt;
    float hpPct = (maxHp > 0) ? (float)hp / (float)maxHp : 0.f;

    float targetV = 40.f + (1.f - hpPct) * 50.f;
    float orbitR = 120.f + 60.f * std::sin(moveT * 0.7f);
    float ang = angTo(tx - x, ty - y) + std::sin(moveT * 1.1f) * 0.8f;
    float gx = tx - std::cos(ang) * orbitR;
    float gy = ty - std::sin(ang) * orbitR;

    float dx = gx - x, dy = gy - y;
    float d = std::sqrt(dx * dx + dy * dy) + 0.0001f;
    float ax = (dx / d) * targetV - vx;
    float ay = (dy / d) * targetV - vy;

    vx += ax * 0.6f * dt;
    vy += ay * 0.6f * dt;

    vx += std::cos(moveT * 2.2f) * 6.f * dt;
    vy += std::sin(moveT * 1.8f) * 6.f * dt;

    x += vx * dt;
    y += vy * dt;
    wrap(x, y, w, h);
}

void Boss::doShooting(float dt, float tx, float ty)
{
    fireTimer -= dt;
    patternTimer -= dt;
    if (patternTimer <= 0.f)
        selectPattern();

    if (windup > 0.f)
    {
        windup -= dt;
        return;
    }

    float aimedAng = angTo(tx - x, ty - y);
    float interval = fireInterval;

    if (pattern == BossPattern::Aimed)
    {
        interval *= 1.0f;
        if(fireTimer <= 0.
