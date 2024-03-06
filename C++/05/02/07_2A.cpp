#include <iostream>
using namespace std;

// 年収計算
int main(void)
{
    // 従業員の基本給, 就業年数に応じた給与, 入社年次
    int basePrice, addPrice, year;
    cin >> basePrice >> addPrice >> year;

    int result = basePrice;
    if (year >= 5 && year <= 9)
    {
        result += addPrice;
    }
    else if (year >= 10 && year <= 14)
    {
        result += addPrice * 2;
    }
    else if (year >= 15 && year <= 19)
    {
        result += addPrice * 3;
    }
    else if (year >= 20 && year <= 24)
    {
        result += addPrice * 4;
    }

    cout << result << endl;
}
