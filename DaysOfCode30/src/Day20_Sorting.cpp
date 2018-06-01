/*
 * Day20_Sorting.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: archer
 */


#include "../include/day20.h"



int day20() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }


  int temp = 0;
  int nSwaps = 0;
  for (unsigned int i = 0; i < a.size(); ++i) {

		for (unsigned int j = 0; j < a.size()-1; ++j) {
			if(a[j] > a[j + 1]){
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        nSwaps++;
  		}
		}
    if(nSwaps == 0){
      break;
    }
	}

    cout << "Array is sorted in " << nSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a.back() << endl;

    return 0;
}