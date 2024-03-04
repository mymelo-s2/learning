#include <iostream>
using namespace std;
int main(void)
{
    string str;

    for (int i = 0; i < 10; i++)
    {
        str += to_string(i + 1);
        str += " ";
    }

    cout << str << endl;
    return 0;
}
