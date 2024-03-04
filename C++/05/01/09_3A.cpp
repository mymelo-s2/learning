#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
        cout << std::right << setw(3) << number[i] << endl;
    }
}