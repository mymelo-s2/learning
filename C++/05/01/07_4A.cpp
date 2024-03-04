#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    int arrayM[N];

    string result;
    for (int i = 1; i <= N; i++)
    {
        cin >> arrayM[i];
        for (int j = 1; j <= arrayM[i]; j++)
        {
            if (j != 1)
            {
                result += " ";
            }
            result += to_string(j);
        }
        cout << result << endl;
        result = "";
    }

    return 0;
}
