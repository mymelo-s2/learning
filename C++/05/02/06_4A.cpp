#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// 最大の差
int main(void)
{
    vector<int> scores;
    for (int i = 0; i < 5; i++)
    {
        int score;
        cin >> score;

        scores.push_back(score);
    }

    sort(scores.begin(), scores.end());
    cout << abs(scores[0] - scores[4]) << endl;

    return 0;
}
