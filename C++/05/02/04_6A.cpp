#include <iostream>
#include <vector>
using namespace std;

// おつり
int main(void)
{
    // 使用可能な硬貨の種類
    vector<int> coinsKind = {500, 100, 50, 10, 5, 1};

    // 入力されたおつり
    int coins;
    cin >> coins;

    // 使用する硬貨の枚数
    int count = 0;

    for (int i = 0; i < coinsKind.size(); i++)
    {
        // 使用するコインの枚数を計算する
        count += coins / coinsKind[i];
        // おつりの金額を更新する
        coins %= coinsKind[i];
    }

    cout << count << endl;
    return 0;
}
