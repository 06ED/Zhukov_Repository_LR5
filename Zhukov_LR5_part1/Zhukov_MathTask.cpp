//
// Created by 06ED on 11.04.2025.
//


#include "Zhukov_MathTask.h"

using namespace std;

int main() {
    int numberA = 0, numberB = 0;

    EnterDigit(numberA, "Enter height A");
    EnterDigit(numberB, "Enter width B");

    const int area = CalcRectangleArea(numberA, numberB);
    cout << "Rectangle area is" << area << endl;
}
