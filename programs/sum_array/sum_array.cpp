#include <iostream>
#define SIZE 100
using namespace std;
void sumArray(int theArray[], int arrayLenght);
void sumMultiArray(int *theMatrix, int rowLenght, int columnLenght);

// THERE ARE UNSOLVED QUESTION(S) IN THIS FILE.
// SEE LINE 38 AND LINE 55.
int main() {
  int myArray[5] = {1, 2, 3, 4, 5};
  sumArray(myArray, 5);

  int myMatrix[4][3] = {{12, 32, 4}, {1, 9, 3}, {2, 4, 5}, {8, 4, 7}};
  sumMultiArray((int *)myMatrix, 4, 3);

  return 0;
}

void sumArray(int theArray[], int arrayLenght) {
  int sum = 0;
  for (int i = 0; i < arrayLenght; i++) {
    sum += theArray[i];
  }
  for (int i = 0; i < arrayLenght; i++) {
    cout << i + 1 << ". element is \t" << theArray[i] << endl;
  }
  cout << "And sum of the elements is " << sum << endl;
}

void sumMultiArray(int *theMatrix, int rowLenght, int columnLenght) {
  int sum = 0;

  for (int row = 0; row < rowLenght; row++) {
    for (int column = 0; column < columnLenght; column++) {
      sum += *((theMatrix + row * columnLenght) +
               column); // theMatrix[row][column]; // <--TRY to understand this
                        // expression
    }
  }

  cout << "Here is your Matrix:\n   ";

  // Printing Coloumn Index:
  for (int column = 0; column < columnLenght; column++) {
    cout << column + 1 << ".\t";
  }
  cout << endl;

  for (int row = 0; row < rowLenght; row++) {
    cout << row + 1 << ". "; // <--- Printing Row Index

    for (int column = 0; column < columnLenght; column++) {
      cout << *((theMatrix + row * columnLenght) + column)
           << "\t"; // <--TRY to understand this expression
    }
    cout << endl;
  }

  cout << endl << "And sum of the matrix is " << sum;
}
