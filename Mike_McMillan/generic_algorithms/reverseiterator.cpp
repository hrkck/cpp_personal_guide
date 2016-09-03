#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int main(){
    vector<int> numbers;
    for (size_t i = 0; i < 11; i++) {
        numbers.push_back(i);
    }
    for (vector<int>::iterator iter = numbers.begin();
         iter != numbers.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    for (vector<int>::reverse_iterator riter = numbers.rbegin();
         riter != numbers.rend(); riter++) {
        cout << *riter << " ";
    }
    cout << endl;
    return 0;
}
