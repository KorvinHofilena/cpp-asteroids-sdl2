#ifndef POPUPTEXT_H
#define POPUPTEXT_H

#include <SDL.h>
#include <string>
#include <vector>

struct PopupText
{
    float x{}, y{}, vy{-40.0f};
    float ttl{0.8f};
    std::string text{"+50"};
    Uint8 r{255}, g{220}, b{100}, a{255};
    bool alive{true};
};

class PopupTextSystem
{
public:
    void spawn(float x, float y, const std::string &t, Uint8 R, Uint8 G, Uint8 B);
    void update(float dt);
    void draw(SDL_Renderer *r) const;

private:
    std::vector<PopupText> list_;
};

#endif
