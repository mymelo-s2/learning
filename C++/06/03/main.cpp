/*
 * Main.cpp
 *
 *  Created on: 2024/03/07
 */
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string filePath = "test.txt";
    std::ifstream file(filePath);  // 読み込むファイルのパスを指定
    std::string line;

    while (std::getline(file, line)) {  // 1行ずつ読み込む
        std::cout << line << std::endl;
    }

    return 0;
}

