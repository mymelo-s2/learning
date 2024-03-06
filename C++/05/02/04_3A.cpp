#include <iostream>
#include <map>

using namespace std;

// 四季
int main(void)
{
    // 四季のタイプと表示名称のマップ
    map<int, string> season = {
        {1, "spring"},
        {2, "summer"},
        {3, "autumn"},
        {4, "winter"},
    };

    int month;
    cin >> month;

    // 四季のタイプ
    int type;
    if (month >= 3 && month <= 5)
    {
        // 春
        type = 1;
    }
    else if (month >= 6 && month <= 8)
    {
        // 夏
        type = 2;
    }
    else if (month >= 9 && month <= 11)
    {
        // 秋
        type = 3;
    }
    else
    {
        // 冬
        type = 4;
    }

    cout << season[type] << endl;

    return 0;
}
