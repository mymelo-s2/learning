#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << std::right << setw(3) << std::setfill('0') << n << endl;
}