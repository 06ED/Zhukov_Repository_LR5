//
// Created by 06ED on 11.04.2025.
//

#ifndef ZHUKOV_MATHTASK_H
#define ZHUKOV_MATHTASK_H

#include <iostream>
#include <string>

using namespace std;

inline bool UserInput(const string &input) {
    if (input.empty()) {
        return false;
    }

    try {
        stoi(input);
    } catch (...) {
        return false;
    }

    return true;
}

inline void EnterDigit(int &varLink, const string &label) {
    string raw;
    cout << label << " = ";
    getline(cin, raw);
    while (!UserInput(raw)) {
        cout << label << " = ";
        getline(cin, raw);
    }

    varLink = stoi(raw);
}

inline int CalcRectangleArea(const int numberA, const int numberB) {
    return numberA * numberB;
}

#endif //ZHUKOV_MATHTASK_H
