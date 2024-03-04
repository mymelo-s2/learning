#include <iostream>
using namespace std;
int main(void)
{
    string s, t;
    cin >> s >> t;

    string result = s;
    for (int i = 0; i <= 3; i++)
    {
        result += " ";
        if (i == 0)
        {
            result += "+";
        }
        else if (i == 1)
        {
            result += t;
        }
        else if (i == 2)
        {
            result += "=";
        }
        else
        {
            result += s;
            result += t;
        }
    }
    cout << result << endl;
    return 0;
}
