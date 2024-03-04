#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            cout << str[i] << " ";
        }
        else
        {
            cout << str[i] << endl;
        }
    }
}