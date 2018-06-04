/*
 * Day7_Arrays.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-arrays/problem
 *
 */

#include "../include/day7.h"

int day7(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    while(cout << arr[--n] << ' ' && n);
    return 0;
}
