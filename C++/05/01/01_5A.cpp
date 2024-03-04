#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    for (int i = 0; i < 1000; i++)
    {
        cout << num << endl;
        num += 1;
    }
}