/*
 * Day14_Scope.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-scope/problem
 *
 */

#include "../include/day14.h"


class Difference {
    private:
    vector<int> elements;

  	public:
    int maximumDifference;

    Difference(vector<int> e){
  		this->elements = e;
  		maximumDifference = INT16_MIN;
  	}


    int returnMax(vector<int> v){
    	int max = INT16_MIN;
    	int temp = 0;

    	for (int i = 0; i < v.size(); ++i) {
			temp = v[i];
			if(temp > max){
				max = temp;
			}
		}
    	return max;
    }


    int returnMin(vector<int> v){
        	int min = INT16_MAX;
        	int temp = 0;

        	for (int i = 0; i < v.size(); ++i) {
    			temp = v[i];
    			if(temp < min){
    				min = temp;
    			}
    		}
        	return min;
        }


    void computeDifference(){
  		int min = returnMin(this->elements);
  		int max = returnMax(this->elements);
  		maximumDifference = max - min;
  	}
};


int day14() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}

