/*
 * Day2_DataTypes.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: archer
 */

#include "day2.h"

int day2() {
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
    cout << s; cout << m;

    return 0;
}
