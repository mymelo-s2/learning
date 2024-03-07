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

	// TimeManageオブジェクトを作成
	TimeManage data;

	cout << "Please enter the correct path of the file you want to load." << endl;

	// 入力されたファイルパス
	string filePath;
	cin >> filePath;

	// CSVファイルを読み込む
    // args: 入力ファイル名, ヘッダーの有無, インデックスの有無, 区切り文字
	data.csv_read(filePath, true, true, ',');

	// 要素を取得する
	for (size_t i = 0; i < data.get_row_size(); i++) {
	    for (size_t j = 0; j < data.get_col_size(i); j++) {
	        int cell_value = data.get_cell_value(i, j);
	        data.set_cell_value(i, j, cell_value);
	    }
	}

	// 変更されたデータを表示する
	data.csv_show();

    return 0;
}
