#include <iostream>
using namespace std;
int main(void)
{
    string str;

    for (int i = 0; i < 1000; i++)
    {
        if (i != 0)
        {
            str += " ";
        }
        str += to_string(i + 1);
    }
    cout << str << endl;
    return 0;
}
