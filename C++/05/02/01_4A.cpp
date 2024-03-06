#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 背番号順
int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> b;

    for (int i = 0; i < n; ++i)
    {
        string str;
        int num;
        cin >> num >> str;
        b.push_back(make_pair(num, str));
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; ++i)
    {
        cout << b[i].first << " " << b[i].second << endl;
    }

    return 0;
}