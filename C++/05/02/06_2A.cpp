#include <iostream>
using namespace std;

// 最大イニング
int main(void)
{
    // 球数上限
    int pitchesNum;
    cin >> pitchesNum;

    int pitches = 0;
    string result = "Yes";
    for (int i = 0; i < 9; i++)
    {
        int thisPitches;
        cin >> thisPitches;

        pitches += thisPitches;

        if (pitches > pitchesNum)
        {
            // 球数上限に達した場合
            result = to_string(i + 1);
            break;
        }
    }

    cout << result << endl;
}
