#include <iostream>
using namespace std;
int main(void)
{
    int N = 3;
    string str[N];

    string result;
    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
        if (i != 0)
        {
            result += "|";
        }
        result += str[i];
    }

    cout << result << endl;

    return 0;
}
