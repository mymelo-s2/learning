#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string result;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            result += ',';
        }
        result += s[i];
    }

    cout << result << endl;
}