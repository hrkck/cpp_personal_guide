/*
 * Day6_Review.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-review-loop/problem
 *
 */

#include "../include/day6.h"


int day6() {
	int t;
	vector<string> strings;
	string s;
	string even = "", odd = "";

	cin >> t;
	while(t--){
		cin >> s;
		strings.push_back(s);
	}

	for (int i = 0; i < strings.size(); ++i) {
		s = strings[i];
		for (int j = 0; j < s.length(); ++j) {
			if(j%2 == 0){
				even += s[j];
			}else if(j%2 == 1){
				odd += s[j];
			}
		}
		cout << even << ' ' << odd << endl;
		even = "", odd = "";
	}

    return 0;
}
