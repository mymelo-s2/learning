#include <iostream>
#include <math.h>
using namespace std;

// 重さの計算
int main(void)
{
    // ボールの個数, 重さ
    double n, k, x;
    cin >> n >> k >> x;

    // 1個あたりのボールの重さ
    double gram = x / k;

    cout << floor(gram * n) << endl;
}
