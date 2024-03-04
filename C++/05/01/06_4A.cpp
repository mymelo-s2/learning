#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        string result;
        for (int j = 1; j <= N; j++)
        {
            result += to_string(i * j);
            if (j != N)
            {
                result += " ";
            }
        }
        cout << result << endl;
        result = "";
    }

    return 0;
}
