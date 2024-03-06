#include <iostream>
using namespace std;

// 球数制限
int main(void)
{
    // イニング数, 球数上限
    int inning, pitchesNum;
    cin >> inning >> pitchesNum;

    int pitches = 0;
    string result = "Yes";
    for (int i = 0; i < inning; i++)
    {
        int thisPitches;
        cin >> thisPitches;

        pitches += thisPitches;

        if (pitches > pitchesNum)
        {
            // 球数上限に達した場合
            result = "No";
            break;
        }
    }

    cout << result << endl;
}
