/*
 * Day3_IntroConditionals.cpp
 *
 *  Created on: Apr 5, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-conditional-statements/problem
 *
 */

#include "day3.h"


int day3(){
    int N;
    cin >> N;
    if(N%2==1){  printf("Weird");  }
    if(N%2==0 && N>20){  printf("Not Weird");  }
    if(N>=2 && N<=5 && N%2==0){  printf("Not Weird");  }
    if(N%2==0 && N>=6 && N<=20){  printf("Weird"); }
    return 0;
}
