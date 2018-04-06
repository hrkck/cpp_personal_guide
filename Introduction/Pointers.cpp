/*
 * Pointers.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
 *
 */


#include "Pointers.h"

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int abs = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = abs;
}

int pointers() {
    int a, b;
    int *pa = &a; int *pb = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
