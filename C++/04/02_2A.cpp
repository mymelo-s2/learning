#include <iostream>
using namespace std;
int main(void)
{
    int A = 437326;
    int B = 9085;
    string result;
    for (int i = 0; i < 2; i++)
    {
        if (i != 0)
        {
            result += " ";
            result += to_string(A % B);
        }
        else
        {
            result += to_string(A / B);
        }
    }
    cout << result << endl;
    return 0;
}
