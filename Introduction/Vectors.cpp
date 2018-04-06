/*
 * Vectors.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/variable-sized-arrays/problem
 *
 * Sample Input:
   2 2
   3 1 5 4
   5 1 2 8 9 3
   0 1
   1 3
 *
 */

#include "Vectors.h"

void printVectors(vector<vector<int>> v);


int vectors() {
    int n; int q;
    int k;
    int input;
    vector<vector<int>> vectors;

    cin >> n >> q;
    while(n--){
    	cin >> k;

    	vector<int> x;
    	while(k--){
    		cin >> input;
    		x.push_back(input);
    	}
    	vectors.push_back(x);
    }

    int i, j;
    for(int _ = 0; _ < q; _++){
        cin >> i >> j;
        printf("%d\n", vectors[i][j]);
    }


    return 0;
}


void printVectors(vector<vector<int>> v){
	for(int _ = 0; _ < v.size(); _++){
		for(int __ = 0; __ < v[_].size(); __++){
			printf("%d ", v[_][__]);
		}
		cout << endl;
	}
}
