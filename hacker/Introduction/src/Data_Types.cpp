/*
 * Data_Types.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
 *
 * Sample Input:
 * 3 12345678912345 a 334.23 14049.30493
 */

#include "../include/Data_Types.h"


int dataTypes() {
    int i; long l; char c; float f; double d;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, l, c, f, d);
    return 0;
}

// NOTE: read strings with std::cin, that's always an easier way.
