#include <iostream>
using namespace std;

// 文字列の反転
int main(void)
{

    // 入力文字列
    string str;
    cin >> str;

    reverse(str.begin(), str.end());

    cout << str << endl;
    return 0;
}
