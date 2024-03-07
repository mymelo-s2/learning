/*
 * TimeManage.cpp
 *
 *  Created on: 2024/03/07
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "../header/TimeManage.hpp"

using namespace std;

TimeManage::TimeManage() {
    isHeader = false;
    isIndex = false;
    delim = ',';
}

int TimeManage::cast_cell(string str) {
	return stoi(str);
}

void TimeManage::csv_read(string filepath, bool isHeader, bool isIndex, char delim) {
    this->filepath = filepath;
    this->isHeader = isHeader;
    this->isIndex = isIndex;
    this->delim = delim;

    string str_buf;
    string str_comma_buf;

    ifstream ifs_csv_file(filepath);

    for (int i = 0; getline(ifs_csv_file, str_buf); i++) {
        cell.push_back(vector<int>());
        istringstream i_stream(str_buf);

        for (int j = 0; getline(i_stream, str_comma_buf, delim); j++) {
            if (isHeader && isIndex) {
                if (i == 0 && j == 0) continue;
                if (i == 0 && j != 0) header.push_back(str_comma_buf);
                if (i != 0 && j == 0) index.push_back(str_comma_buf);
                if (i != 0 && j != 0) cell.at(i - 1).push_back(cast_cell(str_comma_buf));
            }
            else if (isHeader) {
                if (i == 0) header.push_back(str_comma_buf);
                if (i != 0 && j == 0) index.push_back(string());
                if (i != 0) cell.at(i - 1).push_back(cast_cell(str_comma_buf));
            }
            else if (isIndex) {
                if (i == 0 && j != 0) header.push_back(string());
                if (j == 0) index.push_back(str_comma_buf);
                if (j != 0) cell.at(i).push_back(cast_cell(str_comma_buf));
            }
            else {
                if (i == 0) header.push_back(string());
                if (j == 0) index.push_back(string());
                cell.at(i).push_back(cast_cell(str_comma_buf));
            }
        }
    }
}

void TimeManage::csv_write(std::string filepath, char delim) {
    // Implementation for csv_write
}

void TimeManage::csv_show() {
	cout << "******************************************************" << endl;
	int headerSize = static_cast<int>(header.size());
	int indexSize = static_cast<int>(index.size());

	if (isHeader) {
	    for (int j = 0; j < headerSize; j++) {
	        if (isIndex && j == 0) cout << "\t";
	        cout << header.at(j) << "(h)" << "\t";
	    }
	    cout << endl;
	}
	for (int i = 0; i < indexSize; i++) {
	    if (isIndex) {
	        cout << index.at(i) << "(i)" << "\t";
	    }
	    int rowSize = static_cast<int>(cell[i].size());
	    for (int j = 0; j < rowSize; j++) {
	        cout << cell.at(i).at(j) << "\t";
	    }
	    cout << endl;
	}
    cout << "******************************************************" << endl;
}

size_t TimeManage::get_row_size() const {
    return cell.size();
}

size_t TimeManage::get_col_size(size_t row_index) const {
    if (row_index < cell.size()) {
        return cell[row_index].size();
    } else {
        return 0;
    }
}

int TimeManage::get_cell_value(size_t row_index, size_t col_index) const {
    if (row_index < cell.size() && col_index < cell[row_index].size()) {
        return cell[row_index][col_index];
    } else {
        return 0;
    }
}

void TimeManage::set_cell_value(size_t row_index, size_t col_index, int value) {
    if (row_index < cell.size() && col_index < cell[row_index].size()) {
        cell[row_index][col_index] = value;
    }
}
