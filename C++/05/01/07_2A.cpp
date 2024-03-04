#include <iostream>
using namespace std;
int main(void)
{
    int N, M;
    cin >> N >> M;

    string result;
    for (int i = 1; i <= N; i++)
    {
        if (i != 1)
        {
            result += " ";
        }
        result += to_string(i);
    }
    cout << result << endl;

    result = "";
    for (int i = 1; i <= M; i++)
    {
        if (i != 1)
        {
            result += " ";
        }
        result += to_string(i);
    }
    cout << result << endl;

    return 0;
}
