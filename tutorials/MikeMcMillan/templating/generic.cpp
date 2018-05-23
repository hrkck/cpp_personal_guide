#include "iostream"

using namespace std;

template<typename T>
void display(T arr[], int size){
        for (size_t i = 0; i < size; i++) {
                cout << arr[i] << " ";
        }
        cout << endl;
}

template<typename T>
T max(T& arg1, T& arg2){
        if (arg1 > arg2) {
                return arg1;
        } else {
                return arg2;
        }
}

int main(){
        // const int size = 10;
        // int numbers[size];
        // for (size_t i = 0; i < size; i++) {
        //   numbers[i] = i+1;
        // }
        // display(numbers, size);
        // string names[] = {"Jim", "Iwona", "Mike", "Riza", "Gulten", "Leonard", "Murat", "Stewui", "Leia", "Luke"};
        // display(names, size);
        int a = 12;
        int b = 23;
        cout << max(a, b) << endl;

        double x = 2.1;
        double y = 4.6;
        cout << max(x, y) << endl;

        string m = "apple";
        string n = "nepal";
        cout << max(n, m) << endl;



        return 0;
}
