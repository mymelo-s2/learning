#include <iostream>
using namespace std;

// ユークリッドの互除法で最大公約数を求める関数
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 最も大きな最大公約数
int main(void)
{
    // 自然数
    int n;
    cin >> n;

    int max_gcd = 0;
    // 1からnまでの範囲の全ての異なる整数の組を調べる
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a + 1; b <= n; ++b)
        {
            // 最大公約数を計算し、それが今までの最大値より大きければ更新する
            int current_gcd = gcd(a, b);
            if (current_gcd > max_gcd)
            {
                max_gcd = current_gcd;
            }
        }
    }

    cout << max_gcd << endl;

    return 0;
}
