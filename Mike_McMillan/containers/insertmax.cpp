#include "iostream"
#include "list"

using namespace std;

// display any given list by an iterator
template<typename T>
void display(list<T> lyst){
        typename list<T>::iterator iter = lyst.begin();
        cout << endl;
        while (iter != lyst.end()) {
                cout << *iter << endl;
                ++iter;
        }
        cout << endl;
}

void insertMax(list<int>& lyst, int value){
        lyst.sort();
        int max = lyst.back();
        if (value > max) {
                lyst.push_back(value);
        }
}

int main(){
        list<string> names;
        // DONT FORGET THAT
        // IF YOU INITIALIZE A LIST AND NOT PUSH ANYTHING
        // A RANDOM VALUE WILL BE GIVEN AUTOMATICALLY
        // WHY IS THAT?
        names.push_back("Hakki");
        names.push_back("Riza");
        names.push_back("Kucuk");
        display(names);

        list<int> numbers;
        numbers.push_back(6);
        numbers.push_back(3);
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(8);
        display(numbers);
        insertMax(numbers, 3);
        display(numbers);
        insertMax(numbers, 9);
        display(numbers);

        return 0;
}
