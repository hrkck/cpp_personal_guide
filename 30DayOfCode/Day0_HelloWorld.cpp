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

#include "day0.h"

int day0() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string;

    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    cout << "Enter a string: "; getline(cin, input_string);

    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << input_string << endl;
    return 0;
}
