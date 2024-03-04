#include <iostream>
using namespace std;
int main(void)
{
    int n = 10;
    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        cout << str[i] << endl;
    }

    return 0;
}
