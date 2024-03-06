#include <iostream>
#include <map>
using namespace std;

// 気温
int main(void)
{
    map<int, string> tempMap = {
        {0, "extremely hot day"},
        {1, "hot summer day"},
        {2, "summer day"},
        {3, "ice day"},
        {4, "normal day"},
    };

    int temp;
    cin >> temp;

    int type = 4;
    if (temp >= 35)
    {
        // 猛暑日
        type = 0;
    }
    else if (temp >= 30)
    {
        // 真夏日
        type = 1;
    }
    else if (temp >= 25)
    {
        // 夏日
        type = 2;
    }
    else if (temp < 0)
    {
        // 真冬日
        type = 3;
    }

    cout << tempMap[type] << endl;
}
