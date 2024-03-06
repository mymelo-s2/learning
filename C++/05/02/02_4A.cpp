#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// セール販売
int main(void)
{
    // 購入アイテム数
    int n;
    cin >> n;

    // 購入アイテム
    vector<pair<string, int>> items;
    bool pantsFlg = false;
    int sumPlace = 0;
    for (int i = 0; i < n; ++i)
    {
        string itemName;
        int price;
        cin >> itemName >> price;
        items.push_back(make_pair(itemName, price));
        if (items[i].first == "pants")
        {
            pantsFlg = true;
        }
        sumPlace += items[i].second;
    }

    if (pantsFlg && sumPlace >= 2000)
    {
        sumPlace -= 500;
    }

    cout << sumPlace << endl;

    return 0;
}
