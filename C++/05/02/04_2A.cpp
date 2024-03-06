#include <iostream>
#include <map>
using namespace std;
int main(void)
{
    // 入力値, 出力値のマップ
    map<string, string> winHand = {
        {"R", "P"},
        {"P", "S"},
        {"S", "R"},
    };

    string input;
    cin >> input;

    cout << winHand[input] << endl;
    return 0;
}
