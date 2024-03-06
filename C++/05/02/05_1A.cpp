#include <iostream>
using namespace std;

// 3 割打者
int main(void)
{
    // 打数、安打数
    double atBats, hits;
    cin >> atBats >> hits;

    string result = "No";
    if (hits / atBats >= 0.3)
    {
        // 打率が3割を超える場合
        result = "Yes";
    }

    cout << result << endl;

    return 0;
}
