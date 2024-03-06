#include <iostream>
using namespace std;

// バイトの休憩時間
int main(void)
{
    int hour;
    cin >> hour;

    string result = "no break";

    if (hour > 8)
    {
        // 勤務時間が8時間を超える場合
        result = "60 min";
    }
    else if (hour > 6 && hour <= 8)
    {
        // 勤務時間が6時間を超え、8時間以下である場合
        result = "45 min";
    }

    cout << result << endl;
    return 0;
}
