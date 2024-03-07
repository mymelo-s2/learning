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

	cout << "勤務表csvのファイルパスを入力してください" << endl;

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

	cout << "勤怠表を表示したい場合は0, 稼働時間を表示したい場合は1を入力してください" << endl;

	int select;
	cin >> select;

	if(select == 0) {
		// 勤怠表を表示する
		data.csv_show();
	} else {
		// 稼働時間を表示する
		data.csv_calc();
	}

    return 0;
}
