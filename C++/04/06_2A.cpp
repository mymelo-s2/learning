#include <iostream>
using namespace std;
int main(void)
{
    int num = 1;

    for (int i = 0; i < 100; i++)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (num % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (num % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << num << endl;
        }
        num += 1;
    }
    return 0;
}
