#include "TextMini.h"
#include <array>

static const int W = 3, H = 5;
static const std::array<std::array<unsigned char, W * H>, 12> GLYPHS = {{
    /* '+' */ {0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0},
    /* '0' */ {1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
    /* '1' */ {0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
    /* '2' */ {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
    /* '3' */ {1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1},
    /* '4' */ {1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1},
    /* '5' */ {1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    /* '6' */ {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    /* '7' */ {1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0},
    /* '8' */ {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    /* '9' */ {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    /* ' ' */ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
}};

static int idxFor(char c)
{
    if (c == '+')
        return 0;
    if (c >= '0' && c <= '9')
        return 1 + (c - '0');
    return 11; // space
}

void drawMiniText(SDL_Renderer *r, int x, int y, const std::string &text, Uint8 R, Uint8 G, Uint8 B, Uint8 A, int scale)
{
    SDL_SetRenderDrawColor(r, R, G, B, A);
    int cx = x;
    for (char c : text)
    {
        int gi = idxFor(c);
        const auto &g = GLYPHS[gi];
        for (int py = 0; py < H; ++py)
        {
            for (int px = 0; px < W; ++px)
            {
                if (g[py * W + px])
                {
                    SDL_Rect q{cx + px * scale, y + py * scale, scale, scale};
                    SDL_RenderFillRect(r, &q);
                }
            }
        }
        cx += (W + 1) * scale;
    }
}
