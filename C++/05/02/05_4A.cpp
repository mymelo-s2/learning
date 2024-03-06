#include <iostream>
using namespace std;

// CD
int main(void)
{
    // 曲数
    int musicNum;
    cin >> musicNum;

    string result = "Yes";
    int time = 0;

    for (int i = 0; i < musicNum; i++)
    {
        // i曲目の長さ
        int min, sec;
        cin >> min >> sec;

        time += min * 60;
        time += sec;

        if (time > 74 * 60)
        {
            result = "No";
        }
    }

    cout << result << endl;

    return 0;
}
