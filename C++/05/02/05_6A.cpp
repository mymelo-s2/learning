#include <iostream>
using namespace std;

// 条件を満たす最小の整数
int main(void)
{
    // 入力値
    int x, y, z;
    cin >> x >> y >> z;

    bool flg = true;
    while (flg)
    {
        if (x % y == z)
        {
            flg = false;
        }
        else
        {
            x += 1;
        }
    }

    cout << x << endl;
    return 0;
}
