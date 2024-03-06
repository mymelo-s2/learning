#include <iostream>
using namespace std;

// テレワーク可能か
int main(void)
{
    int usePer;
    string weather;
    cin >> usePer >> weather;

    string result = "No";
    if (usePer >= 30 || weather == "rainy")
    {
        result = "Yes";
    }

    cout << result << endl;

    return 0;
}
