// the nice solution of jdarthenay from StackOverFlow:

#define N_UPPER_LIMIT 1023
#include <stdio.h>

int main() {
  long integers[N_UPPER_LIMIT + 1] = {0, 1, 2};
  long sq_of_integers[N_UPPER_LIMIT + 1] = {0, 1, 4};
  long first_differences[N_UPPER_LIMIT] = {1, 3};
  long second_difference[] = {2};
  int end1 = 1;
  int end2 = 2;
  int i;
  for (i = 0; i < 2; i++) {
    int input;

    printf("Enter a number to be squared: ");
    fflush(stdout);
    scanf(" %d", &input);

    if (input < 0) {
      printf("Input must be non-negative\n");
    } else if (input <= integers[end2]) {
      printf("The answer is already known:\n");
      printf("square(%ld) = %ld\n", integers[input], sq_of_integers[input]);
    } else if (input > N_UPPER_LIMIT) {
      printf("Please do not go further than %d.\n", N_UPPER_LIMIT);
    } else {
      while (input > integers[end2]) {
        // Calculation of the square root:
        integers[end2 + 1] = integers[end2] + 1;
        sq_of_integers[end2 + 1] = second_difference[0] +
                                   first_differences[end1] +
                                   sq_of_integers[end2];
        first_differences[end1 + 1] =
            sq_of_integers[end2 + 1] - sq_of_integers[end2];
        end2++;
        end1++;
        printf("square(%ld) = %ld\n", integers[end2], sq_of_integers[end2]);
      }
    }
  }

  return 0;
}

// My "not" working code below.

/*
 * babbages_difference_machine.c
 *
 *  Created on: Mar 24, 2016
 *      Author: bloyd


 ***#include<stdio.h>

   int main() {

   char integers[] = "123";
   char sq_of_integers[] = "014";
   char first_differences[] = "13";
   char second_difference[] = "2";
   int input;
   int i;
   int x;
   int end2 = 2;
   int end1 = 1;
   int to_add;

   for (i = 0; i <= 1; i++) {
    printf("Enter a number to be squared: ");
    scanf(" %d", &input);

    if (input <= integers[end2]) {
      printf("It is already known, sir.\n");
    } else {
      printf("something\n");

      for (x = 0; x <= input - integers[2]; x++) {

        // Calculation of the square root:
        to_add = integers[end2] + 1;
        strcat(integers, to_add );
        to_add = second_difference[0]
 + first_differences[end1] + sq_of_integers[end2];
        strcat(sq_of_integers, to_add);
        to_add = sq_of_integers[end2]
            - sq_of_integers[end2 - 1];
        strcat(first_differences, to_add);
        printf(" %s\n", &sq_of_integers[end2]);
        end2 = end2 + 1;
        end1 = end1 + 1;
      }
    }
   }
   return 0;
   }
 */
