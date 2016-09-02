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
    const int sizeNumbers = 10;
    int numbers[] = {10, 3, 8, 7, 7, 5, 4, 11, 2, 0};
    vector<int> nums(numbers, numbers + sizeNumbers);
    display(nums);
    sort(nums.begin(), nums.end());
    display(nums);
    return 0;
}
