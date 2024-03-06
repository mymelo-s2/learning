#include <iostream>
#include <map>
using namespace std;

// サイクルヒット
int main(void)
{
    map<int, bool> hitMap = {
        {1, false},
        {2, false},
        {3, false},
        {4, false},
    };

    for (int i = 0; i < 5; i++)
    {

        int hitType;
        cin >> hitType;

        if (hitType != 0)
        {
            hitMap[hitType] = true;
        }
    }

    string result = "Yes";
    for (pair<int, bool> p : hitMap)
    {
        if (!p.second)
        {
            result = "No";
        }
    }

    cout << result << endl;

    return 0;
}
