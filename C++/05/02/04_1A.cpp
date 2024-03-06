#include <iostream>
#include <map>
using namespace std;

// 花言葉
int main(void)
{
    // あらかじめ登録しておく花と花言葉
    map<string, string> flowerLang;
    flowerLang["rose"] = "I love you";
    flowerLang["cosmos"] = "harmony";
    flowerLang["tulip"] = "perfect lover";
    flowerLang["hydrangea"] = "heartlessness";
    flowerLang["jasmine"] = "amiability";

    string flower;
    cin >> flower;

    cout << flowerLang[flower] << endl;
    return 0;
}
