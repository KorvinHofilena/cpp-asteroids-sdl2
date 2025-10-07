#ifndef TEXTMINI_H
#define TEXTMINI_H

#include <SDL.h>
#include <string>

void drawMiniText(SDL_Renderer *r, int x, int y, const std::string &text, Uint8 R, Uint8 G, Uint8 B, Uint8 A, int scale = 2);

#endif
