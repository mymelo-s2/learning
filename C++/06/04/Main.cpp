/*
 * Main.cpp
 *
 *  Created on: 2024/03/07
 */
#include <fstream>
#include <iostream>
#include <string>
#include "../header/TimeManage.hpp"

using namespace std;

int main() {

    TimeManage timeManage;

    cout << "Please enter the correct path of the file you want to load." << endl;

    while (true) {
        // 入力されたファイルパス
    	std::string filePath;
    	std::cin >> filePath;

    	timeManage.set(filePath);

    	// 読み込むファイルのパスを指定
    	std::ifstream file(timeManage.get());

    	// ファイルのオープンに失敗した場合
    	if (!file.is_open()) {
    	  std::cerr << "Failed to open file: " << filePath << std::endl;
    	  return 1; // エラーコード1を返してプログラム終了
    	}

    	cout << "******************************************************" << endl;

    	std::string line;
    	while (std::getline(file, line)) {
    	  // 1行ずつ読み込む
    	  std::cout << line << std::endl;
    	}

    	// ファイルのクローズ
    	file.close();

    	cout << "******************************************************" << endl;
    }

    return 0;
}

