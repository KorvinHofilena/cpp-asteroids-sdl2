#include "HighScores.h"
#include <fstream>
#include <sstream>
#include <algorithm>

bool HighScores::cmp(const ScoreEntry &a, const ScoreEntry &b) { return a.score > b.score; }

bool HighScores::load(const std::string &path)
{
    entries.clear();
    std::ifstream in(path, std::ios::in);
    if (!in)
        return false;
    std::string line;
    while (std::getline(in, line))
    {
        if (line.empty())
            continue;
        std::istringstream iss(line);
        std::string name;
        int sc = 0;
        if (!(iss >> name >> sc))
            continue;
        entries.push_back({name, sc});
    }
    std::sort(entries.begin(), entries.end(), cmp);
    if (entries.size() > 10)
        entries.resize(10);
    return true;
}

bool HighScores::save(const std::string &path) const
{
    std::ofstream out(path, std::ios::out | std::ios::trunc);
    if (!out)
        return false;
    for (const auto &e : entries)
        out << e.name << " " << e.score << "\n";
    return true;
}

void HighScores::submit(const std::string &name, int score)
{
    entries.push_back({name, score});
    std::sort(entries.begin(), entries.end(), cmp);
    if (entries.size() > 10)
        entries.resize(10);
}
