#include "time.h"
#include "iostream"
#include "stdio.h"
#include "cstdlib"

using namespace std;

void display(int arr[], int size){
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size){
    int j, temp;
    for (int i = 1; i < size; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
        // display(arr, size);
    }
}

void quickSort(int arr[], int left, int right){
    int i = left;
    int j = right;
    int temp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}

double getTime(clock_t time1, clock_t time2){
    double ticks = time1 - time2;
    return (ticks * 10) / CLOCKS_PER_SEC;
}

void genData(int arr[], int size){
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int main(){
    const int size = 10000;
    int numbers[size];

    genData(numbers, size); // generate a set of data
    clock_t begin = clock(); // clock begin
    insertionSort(numbers, size); // sort
    clock_t end = clock(); // clock stop
    cout << "Insertion sort: \t" << getTime(end, begin) << "ms" << endl; // display the result

    genData(numbers, size); // generate a new set of data
    begin = clock(); // clock begin
    quickSort(numbers, 0, size); // sort
    end = clock(); // clock stop
    cout << "Quick sort: \t\t" << getTime(end, begin) << "ms" << endl; // display the result

    return 0;
}
