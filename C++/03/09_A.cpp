#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    string dummy;
    getline(cin, dummy);
    string S;
    for (int i = 0; i < N; i++) {
        getline(cin, S, ',');
        cout << S << endl;
    }
}
