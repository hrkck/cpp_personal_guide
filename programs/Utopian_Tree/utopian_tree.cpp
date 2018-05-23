#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The Code is created at HACKERRANK.com, for UtopianTree Challange by dheeraj.
// Test inputs can be found at
// https://www.hackerrank.com/challenges/utopian-tree

int main() {
  int t;
  scanf("%d", &t);
  int a0 = 0;
  int a1 = 0;
  for (a0 = 0; a0 < t; a0++) { // EveryLoop stands for a test.
    int n;
    scanf("%d", &n);
    int h = 1;
    for (a1 = 0; a1 <= n; a1++) { // Every Loop stands for a season.
      if (a1 == 0) {
        continue; // Initial Loop must be omitted.
      }
      if (a1 % 2 == 1) {
        h = h * 2; // Spring Season
      }
      if (a1 % 2 == 0) {
        h = h + 1; // Summer Season
      }
    }
    printf("\t%d\n", h);
  }
  return 0;
}
