#include <iostream>
using namespace std;

// いちばんお得
int main(void)
{
    int g1, p1, g2, p2;
    cin >> g1 >> p1 >> g2 >> p2;

    if (p1 * g2 < p2 * g1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
    return 0;
}
