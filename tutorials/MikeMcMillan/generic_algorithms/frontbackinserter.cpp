#include "iostream"
#include "vector"
#include "algorithm"
#include "deque"

using namespace std;

template<typename T>
void display_vector(vector<T> v){
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

template<typename T>
void display_deque(deque<T> v){
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    copy(v2.begin(), v2.end(), back_inserter(v1));
    display_vector(v1);

    deque<int> d1;
    d1.push_front(1);
    d1.push_front(2);
    d1.push_front(3);
    copy(v2.begin(), v2.end(), front_inserter(d1));
    display_deque(d1);

    return 0;
}
