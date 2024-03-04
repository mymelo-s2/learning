#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    cout << std::right << setw(m) << n << endl;
}