#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        cout << std::right << setw(m) << numbers[i] << endl;
    }
}