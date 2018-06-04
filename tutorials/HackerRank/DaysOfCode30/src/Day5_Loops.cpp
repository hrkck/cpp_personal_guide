/*
 * Day5_Loops.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-loops/problem
 *
 */

#include "../include/day5.h"


int day5(){
    int n;
    cin >> n;
    for (int i = 1; i < 11; ++i) {
//		cout << n << " x " << i << " = " << n*i << endl;
		printf("%d x %d = %d\n", n, i, n*i);
	}
    return 0;
}
