#include <iostream>
#define N 9
using namespace std;
int main(void)
{
    for (int i = 1; i <= N; i++)
    {
        string result;
        for (int j = 1; j <= N; j++)
        {
            result += to_string(i * j);
            if (j != 9)
            {
                result += " ";
            }
        }
        cout << result << endl;
        result = "";
    }

    return 0;
}
