#include <iostream>
#define N 4
using namespace std;
int main(void)
{
    int numbers[N] = {0, 8, 1, 3};

    string result;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 != 0)
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
