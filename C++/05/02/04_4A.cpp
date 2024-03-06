#include <iostream>
using namespace std;

// オルタネーティングキャップス
int main(void)
{
    // 入力された英単語
    string str;
    cin >> str;

    // 全て小文字にする
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << endl;
    return 0;
}
