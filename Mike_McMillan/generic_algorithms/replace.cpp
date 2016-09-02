#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

template<typename T>
void display(vector<T> v){
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> numbers;
    for (size_t i = 0; i < 11; i++) {
        numbers.push_back(i);
    }
    display(numbers);
    replace(numbers.begin(), numbers.end(), 6, 7);
    display(numbers);

    return 0;
}
