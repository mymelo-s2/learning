#include <iostream>
using namespace std;
int main(void)
{
    int e1, e2;
    cin >> e1 >> e2;

    if (e1 == 0 || e2 == 0)
    {
        cout << "invalid";
    }
    else
    {
        cout << e1 * e2;
    }

    return 0;
}
