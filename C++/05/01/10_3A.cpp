#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%2d", i * j);
            if (j != 9)
            {
                printf(" | ");
            }
            else
            {
                printf("\n");
            }
        }
        if (i != 9)
        {
            for (int j = 0; j < 9 * 2 + 3 * 8; j++)
            {
                printf("=");
            }
            printf("\n");
        }
    }
}