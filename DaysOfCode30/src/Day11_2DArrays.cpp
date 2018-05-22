/*
 * Day11_2DArrays.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 */

#include "../include/day11.h"


int day11() {
	vector<vector<int>> arr(6, vector<int>(6));
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}

	int MAXhourglass = -63, hourglass = -63;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			hourglass = arr[i + 0][j + 0] + arr[i + 0][j + 1] + arr [i + 0][j + 2] +
							                arr[i + 1][j + 1] +
					    arr[i + 2][j + 0] + arr[i + 2][j + 1] + arr [i + 2][j + 2];

			if(hourglass > MAXhourglass){
				MAXhourglass = hourglass;
			}
		}
		hourglass = 0;
	}

	cout << MAXhourglass;
	return 0;
}


// HourGlass:
// = arr[i + 0][j + 0] + arr[i + 0][j + 1] + arr [i + 0][j + 2] +
//						 arr[i + 1][j + 1] +
//   arr[i + 2][j + 0] + arr[i + 2][j + 1] + arr [i + 2][j + 2];


