#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * 和がtargetになる組み合わせを探す
 * @param nums 入力された自然数の配列
 * @param target 和
 * @param combination 和がtargetになる組み合わせの配列
 * @param index 配列のindex
 * @param result 和がtargetになる組み合わせの配列の配列
 */
void findCombination(vector<int> &nums, int target, vector<int> &combination, int index, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(combination);
        return;
    }
    if (target < 0 || index >= nums.size())
    {
        return;
    }
    combination.push_back(nums[index]);
    findCombination(nums, target - nums[index], combination, index + 1, result);
    combination.pop_back();
    findCombination(nums, target, combination, index + 1, result);
}

// ラッキーナンバー
int main()
{
    // 入力される自然数の数
    int n;
    cin >> n;

    // 入力された自然数の配列
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    // 和が777になる組み合わせの配列の配列 ex: [[111, 666], [111, 222, 444]]
    vector<vector<int>> result;
    // 和が777になる組み合わせの配列 ex: [111, 666]
    vector<int> combination;
    // 和が777になる組み合わせを探す
    findCombination(nums, 777, combination, 0, result);

    if (result.empty())
    {
        // 和が777になる組み合わせがない場合
        cout << "no answer" << endl;
    }
    else if (result.size() > 1)
    {
        // 和が777になる組み合わせが複数ある場合
        cout << "multiple answers" << endl;
    }
    else
    {
        // 和が777になる組み合わせが1つの場合
        string viewResult;
        for (int num : result[0])
        {
            viewResult += to_string(num);
            viewResult += " ";
        }
        cout << viewResult.substr(0, viewResult.size() - 1) << endl;
    }

    return 0;
}
