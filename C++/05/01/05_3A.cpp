#include <iostream>
using namespace std;
int main(void)
{
    int N = 10;
    int numbers[N];
    string result;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        result += to_string(numbers[i]);
        result += ",";
    }

    cout << result << endl;
    return 0;
}
