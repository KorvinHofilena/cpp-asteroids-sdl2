#ifndef ENEMY_H
#define ENEMY_H

#include <SDL.h>

enum class EnemyType
{
    Scout,
    Tank,
    Spinner
};

class Enemy
{
public:
    float x{};
    float y{};
    float vx{};
    float vy{};
    float radius{12.0f};
    EnemyType type{EnemyType::Scout};
    bool alive{true};

    Enemy(float startX, float startY);
    void update(float dt, int screenW, int screenH);
    void draw(SDL_Renderer *renderer) const;
};

#endif
