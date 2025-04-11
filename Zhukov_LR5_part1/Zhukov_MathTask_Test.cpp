//
// Created by 06ED on 11.04.2025.
//

#include "Zhukov_MathTask.h"

#include "../CUTE/cute/cute.h"
#include "../CUTE/cute/ide_listener.h"
#include "../CUTE/cute/cute_runner.h"

using namespace cute;

void testCalcRectangleArea() {
    constexpr int a = 3;
    constexpr int b = 5;
    constexpr int expected = 15;

    const int actual = CalcRectangleArea(a, b);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Empty() {
    const string str;
    constexpr bool expected = false;

    const bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Letter() {
    const string str = "a";
    constexpr bool expected = false;

    const bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_DigitLetter() {
    const string str = "5a";
    constexpr bool expected = false;

    const bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Negative() {
    const string str = "-5";
    constexpr bool expected = false;

    const bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.emplace_back(testCalcRectangleArea);
    s.emplace_back(testUserInput_Empty);
    s.emplace_back(testUserInput_Letter);
    s.emplace_back(testUserInput_DigitLetter);
    s.emplace_back(testUserInput_Negative);

    ide_listener<> listener;

    return makeRunner(listener)(s, "Test rectangle area");
}
