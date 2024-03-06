#include <iostream>
#include <map>
using namespace std;

// 採点
int main(void)
{
    // 解答と得点のmap
    map<string, int> scoreMap = {
        {"no_answer", 0},
        {"incorrect", -1},
        {"correct", 2},
    };

    // 問題数
    int questionNum;
    cin >> questionNum;

    int score = 0;
    for (int i = 0; i < questionNum; i++)
    {
        string answer;
        cin >> answer;
        score += scoreMap[answer];
    }

    cout << score << endl;
    return 0;
}
