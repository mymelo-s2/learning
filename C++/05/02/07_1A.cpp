#include <iostream>
using namespace std;

// 占い
int main(void)
{
    int n;
    cin >> n;

    string result = "No";
    if (n == 7)
    {
        result = "Yes";
    }

    cout << result << endl;
}
