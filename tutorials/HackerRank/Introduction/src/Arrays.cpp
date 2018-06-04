/*
 * Arrays.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/arrays-introduction/problem
 *
 */


#include "../include/Arrays.h"

int arrays() {
    int N, i = 0;
    cin >> N;
    int *A = new int[N];

    while(cin >> A[i++]);
    // i = 5 at the moment.
    while(cout << A[--N] << ' ' && N);
    return 0;
}

// printf("%d", i);
