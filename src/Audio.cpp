#include "Audio.h"

Mix_Chunk *Audio::s_shoot = nullptr;
Mix_Chunk *Audio::s_explode = nullptr;
Mix_Chunk *Audio::s_pickup = nullptr;
Mix_Chunk *Audio::s_hit = nullptr;
Mix_Chunk *Audio::s_bossShot = nullptr;
Mix_Music *Audio::m_game = nullptr;
Mix_Music *Audio::m_boss = nullptr;
bool Audio::loaded = false;

static Mix_Chunk *loadChunk(const char *p) { return Mix_LoadWAV(p); }
static Mix_Music *loadMusic(const char *p) { return Mix_LoadMUS(p); }

bool Audio::init()
{
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 512) != 0)
        return false;
    Mix_AllocateChannels(32);
    s_shoot = loadChunk("assets/audio/laser.wav");
    s_explode = loadChunk("assets/audio/explosion.wav");
    s_pickup = loadChunk("assets/audio/pickup.wav");
    s_hit = loadChunk("assets/audio/hit.wav");
    s_bossShot = loadChunk("assets/audio/boss_shot.wav");
    m_game = loadMusic("assets/audio/game_loop.ogg");
    m_boss = loadMusic("assets/audio/boss_loop.ogg");
    loaded = true;
    return true;
}

void Audio::shutdown()
{
    if (!loaded)
        return;
    if (m_game)
    {
        Mix_FreeMusic(m_game);
        m_game = nullptr;
    }
    if (m_boss)
    {
        Mix_FreeMusic(m_boss);
        m_boss = nullptr;
    }
    if (s_shoot)
    {
        Mix_FreeChunk(s_shoot);
        s_shoot = nullptr;
    }
    if (s_explode)
    {
        Mix_FreeChunk(s_explode);
        s_explode = nullptr;
    }
    if (s_pickup)
    {
        Mix_FreeChunk(s_pickup);
        s_pickup = nullptr;
    }
    if (s_hit)
    {
        Mix_FreeChunk(s_hit);
        s_hit = nullptr;
    }
    if (s_bossShot)
    {
        Mix_FreeChunk(s_bossShot);
        s_bossShot = nullptr;
    }
    Mix_CloseAudio();
    loaded = false;
}

void Audio::playSfx(Sfx s, int volume)
{
    if (!loaded)
        return;
    Mix_Chunk *c = nullptr;
    switch (s)
    {
    case Sfx::Shoot:
        c = s_shoot;
        break;
    case Sfx::Explode:
        c = s_explode;
        break;
    case Sfx::Pickup:
        c = s_pickup;
        break;
    case Sfx::Hit:
        c = s_hit;
        break;
    case Sfx::BossShot:
        c = s_bossShot;
        break;
    }
    if (!c)
        return;
    if (volume >= 0)
        Mix_VolumeChunk(c, volume);
    Mix_PlayChannel(-1, c, 0);
}

void Audio::playMusic(Music m, int loops, int volume)
{
    if (!loaded)
        return;
    Mix_Music *mm = (m == Music::Boss) ? m_boss : m_game;
    if (!mm)
        return;
    if (volume >= 0)
        Mix_VolumeMusic(volume);
    if (Mix_PlayingMusic())
    {
        if (Mix_GetMusicType(nullptr) != MUS_NONE)
            Mix_HaltMusic();
    }
    Mix_PlayMusic(mm, loops);
}

void Audio::stopMusic()
{
    if (!loaded)
        return;
    if (Mix_PlayingMusic())
        Mix_HaltMusic();
}
