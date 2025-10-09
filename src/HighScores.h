#pragma once
#include <string>
#include <vector>

struct ScoreEntry
{
    std::string name;
    int score;
};

class HighScores
{
public:
    bool load(const std::string &path);
    bool save(const std::string &path) const;
    void submit(const std::string &name, int score);
    const std::vector<ScoreEntry> &top() const { return entries; }

private:
    std::vector<ScoreEntry> entries;
    static bool cmp(const ScoreEntry &a, const ScoreEntry &b);
};
