#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string fn, fm;
    cin >> fn >> fm;

    if (int(fn[0] - '0') > int(fm[0] - '0'))
    {
        cout << "down";
    }
    else
    {
        cout << "up";
    }

    return 0;
}
