#include <iostream>
using namespace std;

template<class mann>
mann plusMe(mann a, mann b){
        return a + b;
}

// What if a double is bigger when it is given as second parameter?
template<class First, class Second>
First smaller(First a, Second b){
        return (a < b ? a : b);
}

for (size_t i = 0; i < count; i++) {
  /* code */
}

int main(){
        int a = 1, b = 2, c = 0;
        c = plusMe(a, b);
        cout << c << endl;

        int x = 45;
        double y = 23.56;
        cout << smaller(x, y) << endl;
}
