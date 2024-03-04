#include <iostream>
using namespace std;
int main()
{
    double n;
    int m;
    cin >> n;
    cin >> m;
    string str = "%.";
    str += to_string(m);
    str += "f\n";
    printf(str.c_str(), n);
}