#include <iostream>
using namespace std;
int main(void)
{
    int N = 10;
    int numbers[N];

    string bar = " | ";

    string result;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        if (i != 0)
        {
            result += bar;
        }
        result += to_string(numbers[i]);
    }

    cout << result << endl;
    return 0;
}
