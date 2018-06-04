/*
 * Day1_DataTypes.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-data-types/problem
 *
 */

#include "../include/day1.h"

int day1() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int j; double f; string m;
    // Read and save an integer, double, and String to your variables.
    cout << "Enter an integer: "; cin >> j;
    cout << "Enter a double: "; cin >> f; cin.ignore();
    cout << "Enter a string: "; getline(cin, m);
    // Print the sum of both integer variables on a new line.
    cout << j + i << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", f + d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << m << endl;

    return 0;
}
