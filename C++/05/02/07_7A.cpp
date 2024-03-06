#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Player
{
    double battingAverage;
    int runsBattedIn;
    int homeRuns;
};

// 三冠王または二冠王かどうかを判定する関数
string checkChampion(const vector<Player> &players)
{
    bool hasTripleChampion = false;
    bool hasDoubleChampion = false;

    // 各指標の最大値を計算
    double maxBattingAverage = 0.0;
    int maxRunsBattedIn = 0;
    int maxHomeRuns = 0;

    for (const auto &player : players)
    {
        maxBattingAverage = max(maxBattingAverage, player.battingAverage);
        maxRunsBattedIn = max(maxRunsBattedIn, player.runsBattedIn);
        maxHomeRuns = max(maxHomeRuns, player.homeRuns);
    }

    // 三冠王または二冠王かどうかを判定
    for (const auto &player : players)
    {
        if (player.battingAverage == maxBattingAverage && player.runsBattedIn == maxRunsBattedIn && player.homeRuns == maxHomeRuns)
        {
            hasTripleChampion = true;
            break;
        }
        if ((player.battingAverage == maxBattingAverage && player.runsBattedIn == maxRunsBattedIn) ||
            (player.battingAverage == maxBattingAverage && player.homeRuns == maxHomeRuns) ||
            (player.runsBattedIn == maxRunsBattedIn && player.homeRuns == maxHomeRuns))
        {
            hasDoubleChampion = true;
        }
    }

    if (hasTripleChampion)
    {
        return "Triple";
    }
    else if (hasDoubleChampion)
    {
        return "Double";
    }
    else
    {
        return "Nobody";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Player> players(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> players[i].battingAverage >> players[i].runsBattedIn >> players[i].homeRuns;
    }

    string result = checkChampion(players);
    cout << result << endl;

    return 0;
}
