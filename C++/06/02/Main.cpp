/*
 * Main.cpp
 *
 *  Created on: 2024/03/07
 */
#include <iostream>

#include "../header/WordCount.hpp"

using namespace std;

int main()
{
	std::string str;

    cout << "Please enter a word!!" << endl;

    WordCount wordCount;
    while (true)
    {
        cin >> str;
        wordCount.set(str.size());
        cout << "Word length is " << wordCount.get() << " characters!!" << endl;
    }

    return 0;
}

