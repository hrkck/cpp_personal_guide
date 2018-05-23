#include "iostream"
#include "vector"

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
    fill(numbers.begin(), numbers.end(), 0);
    display(numbers);

    vector<string> names;
    names.push_back("Jennifer");
    names.push_back("Raymond");
    names.push_back("Mike");
    names.push_back("Patrick");
    names.push_back("Davic");
    names.push_back("Leonard");
    display(names);
    fill(names.begin(), names.end(), "?");
    display(names);
    return 0;
}
