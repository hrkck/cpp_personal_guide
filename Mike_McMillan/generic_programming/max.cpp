#include "iostream"

using namespace std;

template<typename T, typename U>
T max(T arg1, U arg2){
        return (arg1 > arg2) ? arg1 : arg2;
}

int main(){
        double num1 = 23.56;
        int num2 = 23;
        cout << "MAX IS: " << max(num1, num2) << endl;
        return 0;
}
