/*
 * Day10_BinaryNumbers.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-binary-numbers/problem
 *
 */

#include "../include/day10.h"

void printVector(vector<int> v){
	for(int _ = 0; _ < v.size(); _++){
		printf("%d ", v[_]);
	}
	cout << endl;
}

int day10(){
    int n;
    int remainder;
    int MAX = 0, temp = 0;
    vector<int> bits;

    cin >> n;
    while(n > 0){
        remainder = n%2;
        n /= 2;
        bits.push_back(remainder);
    }
    reverse(begin(bits), end(bits));
//    printVector(bits);

    for (int i = 0; i < bits.size(); ++i) {
		if(bits[i] == 1){
			temp++;
		}else if(temp > MAX){
			MAX = temp;
			temp = 0;
		}else{
			temp = 0;
		}
	}
    if(temp > MAX){ MAX = temp; }

    cout << MAX;

    return 0;
}



