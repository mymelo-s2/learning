#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            t += ',';
        }
        t += s[i];
    }
    reverse(t.begin(), t.end());
    cout << t << endl;
}