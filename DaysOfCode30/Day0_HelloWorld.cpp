/*
 * Day0_HelloWorld.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-hello-world/problem
 *
 */

#include "../DaysOfCode30/day0.h"

int day0() {
    string input_string;

    cout << "Enter a string: ";
    getline(cin, input_string);

    cout << "Hello, World." << endl;

    cout << input_string << endl;
    return 0;
}
