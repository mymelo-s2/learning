#include <iostream>
using namespace std;
int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    int N = 0;
    N += A;
    N *= B;
    N %= C;

    cout << N << endl;
    return 0;
}
