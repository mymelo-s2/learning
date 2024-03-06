#include <iostream>
#include <cstdlib>
using namespace std;

// ロボットの移動
int main(void)
{
    // 目標地点の座標
    int x, y;
    cin >> x >> y;

    int steps = 0;

    steps += abs(x - 0);
    steps += abs(y - 0);

    cout << steps << endl;

    return 0;
}
