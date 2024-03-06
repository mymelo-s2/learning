#include <iostream>
using namespace std;

// 文字列の逆順
int main(void)
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
