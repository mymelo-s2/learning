#include <iostream>
using namespace std;
int main(void)
{
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        printf("(%d, %d)", a, b);
        if (i < n - 1)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }
}
