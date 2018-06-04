/*
 * Day21_Generics.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: archer
 *
 *  Link to the problem:
 *  https://www.hackerrank.com/challenges/30-generics/problem
 *
 */



#include "../include/day21.h"

// Write your code here
template <typename valueType>
void printArray(vector<valueType> v){
    for(unsigned int i = 0; i < v.size(); ++i){
        cout << v[i] << endl;
    }
}


int day21() {
	int n;

	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}

	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}
