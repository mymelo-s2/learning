#include <iostream>
using namespace std;
int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A * B <= C)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
