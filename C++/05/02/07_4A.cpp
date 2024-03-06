#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// 気温2
int main(void)
{
    // 都市数
    int cityNum;
    cin >> cityNum;

    // 平均気温
    vector<int> tempAve;

    for (int i = 0; i < cityNum; i++)
    {
        int temp;
        cin >> temp;

        tempAve.push_back(temp);
    }

    sort(tempAve.begin(), tempAve.end());
    cout << abs(tempAve[0] - tempAve[cityNum - 1]) << endl;
}
