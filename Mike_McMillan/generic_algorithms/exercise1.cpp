#include "iostream"
#include "vector"
#include "cstdlib"
#include "ctime"
#include "algorithm"
#include "numeric"

using namespace std;

template<typename T>
void display(vector<T> v){
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int genRandom(){
    return rand() % 100 + 1;
}

int main(){
    vector<int> numbers(10);
    srand(time(NULL));
    // for (size_t i = 0; i < numbers.size(); i++) {
    //     numbers[i] = rand() % 100 + 1;
    // }
    generate(numbers.begin(), numbers.end(), genRandom);
    display(numbers);
    // int sum = 0;
    // for (size_t i = 0; i < numbers.size(); i++) {
    //     sum += numbers[i];
    // }
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "The sum is " << sum << endl;

    return 0;
}
