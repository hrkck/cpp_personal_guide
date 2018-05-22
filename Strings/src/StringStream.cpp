/*
 * StringStream.cpp
 *
 *  Created on: Apr 5, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
 *
 */

#include "../include/StringStream.h"

/*
 * A great solution thanks to the great HackerRank Community:
 *
 * link to the comment:
 * https://www.hackerrank.com/challenges/c-tutorial-stringstream/forum/comments/248362
 *
 * */
vector<int> parseInts(string str) {
	stringstream ss(str);
	int a;
	vector<int> vec;

	while (ss >> a){
	    vec.push_back(a);
	    if (ss.peek() == ','){  ss.ignore();  }
	}

	return vec;
}

int stringStreamProblem() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(unsigned int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}

