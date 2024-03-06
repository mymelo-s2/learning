#include <iostream>
using namespace std;

// ゾロ目
int main(void)
{
    // 入力された大豆の個数
    int num;
    cin >> num;

    // 大豆の個数を11で割った値
    int result = num / 11;

    cout << result * 11 << endl;
    return 0;
}
