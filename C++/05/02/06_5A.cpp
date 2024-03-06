#include <iostream>
#include <vector>
using namespace std;

// 中央値
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
    cout << scores[2] << endl;
    return 0;
}
