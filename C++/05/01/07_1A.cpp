#include <iostream>
#define Len 2
using namespace std;
int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < Len; i++)
    {
        if (i == 0)
        {
            string result;
            for (int j = 1; j <= N / 2; j++)
            {
                if (j != 1)
                {
                    result += " ";
                }
                result += to_string(j);
            }
            cout << result << endl;
        }
        else
        {
            string result;
            for (int j = N / 2 + 1; j <= N; j++)
            {
                if (j != N / 2 + 1)
                {
                    result += " ";
                }
                result += to_string(j);
            }
            cout << result << endl;
        }
    }

    return 0;
}
