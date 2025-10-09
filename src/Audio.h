#pragma once
#include <SDL.h>
#include <SDL_mixer.h>

enum class Sfx
{
    Shoot,
    Explode,
    Pickup,
    Hit,
    BossShot
};
enum class Music
{
    Game,
    Boss
};

class Audio
{
public:
    static bool init();
    static void shutdown();
    static void playSfx(Sfx s, int volume = -1);
    static void playMusic(Music m, int loops = -1, int volume = -1);
    static void stopMusic();

private:
    static Mix_Chunk *s_shoot;
    static Mix_Chunk *s_explode;
    static Mix_Chunk *s_pickup;
    static Mix_Chunk *s_hit;
    static Mix_Chunk *s_bossShot;
    static Mix_Music *m_game;
    static Mix_Music *m_boss;
    static bool loaded;
};
