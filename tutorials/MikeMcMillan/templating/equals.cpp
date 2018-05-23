#include "iostream"

using namespace std;

template<typename T>
bool equals(T a, T b){
        return (a == b ? true : false);
}

int main(){
        int a, b;
        a = 1, b = 2;
        if (equals(a, b)) {
                cout << a << " and " << b << " are equal." << endl;
        } else {
                cout << a << " and " << b << " are not equal." << endl;
        }
        string one, two;
        one = two = "NHAHA!";
        if (equals(one, two)) {
                cout << one << " and " << two << " are equal." << endl;
        } else {
                cout << one << " and " << two << " are not equal." << endl;
        }
        return 0;
}
