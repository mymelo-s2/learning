#include <iostream>
using namespace std;
int main(void)
{
    int num = 813;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << num / 100 << endl;
        }
        else if (i == 1)
        {
            cout << (num / 10) % 10 << endl;
        }
        else
        {
            cout << num % 10 << endl;
        }
    }
    return 0;
}
