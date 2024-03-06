#include <iostream>
#include <map>
using namespace std;

// 競輪のユニフォーム
int main(void)
{
    int num;
    cin >> num;

    std::map<int, std::string> uniformNum;
    uniformNum[1] = "white";
    uniformNum[2] = "black";
    uniformNum[3] = "red";
    uniformNum[4] = "blue";
    uniformNum[5] = "yellow";
    uniformNum[6] = "green";
    uniformNum[7] = "orange";
    uniformNum[8] = "pink";
    uniformNum[9] = "purple";

    cout << uniformNum[num] << endl;
    return 0;
}
