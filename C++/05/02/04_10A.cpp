#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// 寒暖差
int main(void)
{
    // 気温の配列
    vector<int> tempList;

    for (int i = 0; i < 10; i++)
    {
        // 気温をtempListに格納する
        int temp;
        cin >> temp;
        tempList.push_back(temp);
    }

    // 寒暖差の有無を判別するフラグ
    string result = "No";

    for (int i = 1; i < 10; i++)
    {
        if (abs(tempList[i - 1] - tempList[i]) >= 3)
        {
            // 前日との気温差(絶対値)が3度以上の場合
            result = "Yes";
            break;
        }
    }

    cout << result << endl;
}
