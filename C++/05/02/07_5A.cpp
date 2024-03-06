#include <iostream>
using namespace std;

// ブロック埋め込み
int main(void)
{
    // 縦、横
    int n, m;
    cin >> n >> m;

    int blocks = n * m / 2;

    cout << blocks << endl;

    return 0;
}
