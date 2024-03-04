#include <iostream>
using namespace std;
int main(void)
{
    string str = "1";
    cin >> str;
    string result;
    for (int i = 0; i < 2; i++)
    {
        if (i != 0)
        {
            result += " ";
        }
        result += str;
    }
    cout << result << endl;
    return 0;
}
