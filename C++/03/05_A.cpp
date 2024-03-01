#include <iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;
    string dummy;
    getline(cin, dummy);
    for (int i = 0; i < N; ++i) {
        string S;
        getline(cin, S);
        cout << S << endl;
    }
}