#include <iostream>
using namespace std;

// 小文字にする
int main(void)
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower); // 大文字にする場合は toupper
    cout << str << endl;
    return 0;
}
