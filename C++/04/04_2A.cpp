#include <iostream>
using namespace std;
int main(void)
{
    int A, B;
    cin >> A >> B;
    cout << to_string(A - B) + " " + to_string(A * B) << endl;
    return 0;
}
