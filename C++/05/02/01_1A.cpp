#include <iostream>
using namespace std;

// スポーツの人数
int main(void)
{
    string sports;
    cin >> sports;

    int result = 0;

    if (sports == "baseball")
    {
        result = 9;
    }
    else if (sports == "basketball")
    {
        result = 5;
    }
    else if (sports == "rugby")
    {
        result = 15;
    }
    else if (sports == "soccer")
    {
        result = 11;
    }
    else if (sports == "volleyball")
    {
        result = 6;
    }

    cout << result << endl;
    return 0;
}
