/*
 * Day9_Recursion.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-recursion/problem
 *
 */

#include "day9.h"

int factorial(int n) {
    if(n <= 1){ return 1; }
    else{ return n * factorial(n-1); }
}

int day9() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}



