#include <iostream>
using namespace std;
int main()
{
    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        double d;
        int n;
        cin >> d >> n;
        printf("%.*f\n", n, d);
    }
}