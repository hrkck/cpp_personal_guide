/*
 * Day9_Recursion.cpp
 *
 *  Created on: May 23, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
 *
 */

#include "../include/day16.h"

int day16(){
    string S;
    cin >> S;

    try{
      int n = stoi(S);
      printf("%d\n", n);
    }
    catch(exception& e){
      printf("Bad String");
    }

    return 0;
}
