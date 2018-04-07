/*
 * Day8_Maps.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
 */

#include "day8.h"


int day8() {
	int q;
	map<string, int> phoneBook;
	string s; int n;

	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> s >> n;
		phoneBook[s] = n;
	}
	while(cin >> s){
		if(phoneBook[s]){
			cout << s << "=" << phoneBook[s] << endl;
		}else{
			cout << "Not found" << endl;
		}
	}
    return 0;
}


