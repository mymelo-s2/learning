/*
 * TimeManage.hpp
 *
 *  Created on: 2024/03/07
 */
#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class TimeManage {
private:
    std::string filepath;
    bool isHeader;
    bool isIndex;
    char delim;
    vector<string> header; // ヘッダー名保管
    vector<string> index;  // インデックス名保管
    vector<vector<int>> cell; // 要素保管

public:
    TimeManage();
    int cast_cell(string);
    void csv_read(string, bool, bool, char);
    void csv_write(string, char);
    void csv_show();
    size_t get_row_size() const;
    size_t get_col_size(size_t row_index) const;
    int get_cell_value(size_t row_index, size_t col_index) const;
    void set_cell_value(size_t row_index, size_t col_index, int value);
};
