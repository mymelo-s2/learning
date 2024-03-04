#include <iostream>
#define N 9
using namespace std;
int main(void)
{
    int numbers[N];

    string result;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];

        if ((i + 1) % 3 == 0)
        {
            result += to_string(numbers[i]);
            cout << result << endl;
            result = "";
        }
        else
        {
            result += to_string(numbers[i]);
            result += " ";
        }
    }

    return 0;
}
