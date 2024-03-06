#include <iostream>
#include <string>
using namespace std;

// キーボードのシミュレーション
int main(void)
{
    int n;
    cin >> n;

    const string capslock = "capslock";
    const string shift = "shift";

    string dummy;
    getline(cin, dummy);

    bool capslockFlg = false;
    string result;
    for (int i = 0; i < n; i++)
    {
        string onClickKey;
        getline(cin, onClickKey);
        if (onClickKey.find(capslock) != std::string::npos)
        {
            // capslock があった場合、フラグを変更する
            capslockFlg = !capslockFlg;
        }
        else
        {
            if (capslockFlg || onClickKey.find(shift) != std::string::npos)
            {
                // capslock == true または shift がある場合、大文字で出力する
                if (onClickKey.find(shift) != std::string::npos)
                {
                    onClickKey = onClickKey.substr(shift.size() + 1);
                }
                transform(onClickKey.begin(), onClickKey.end(), onClickKey.begin(), ::toupper);
                result += onClickKey;
            }
            else
            {
                result += onClickKey;
            }
        }
    }
    cout << result << endl;
    return 0;
}
