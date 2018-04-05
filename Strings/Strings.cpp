/*
 * Strings.cpp
 *
 *  Created on: Apr 5, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 */

#include "Strings.h"

int strings() {
    string s1; string s2;
    cout << "Enter a string: " << endl; cin >> s1;
    cout << "Enter a string: " << endl; cin >> s2;

    printf("%d %d\n", (int) s1.size(), (int) s2.size());
    printf("%s\n", (s1 + s2).c_str());

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s", s1.c_str(), s2.c_str());
    return 0;
}
