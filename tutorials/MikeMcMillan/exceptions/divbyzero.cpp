#include "iostream"
#include "stdexcept"

using namespace std;

// Creating my own exception!
class DivideByZero : public runtime_error {
public:
        DivideByZero() :
                runtime_error("Divide by zero exception"){
        }
};

// A situation where this exception may happen:
double quotient(double numer, double denom){
        if (denom == 0) {
                throw DivideByZero();
        } else {
                return numer / denom;
        }
}

int main(){
        double number1, number2, ratio;
        cout << "Enter a numerator: ";
        cin >> number1;
        cout << "Enter a denominator: ";
        cin >> number2;

        try {
                ratio = quotient(number1, number2);
                cout << "Result is: " << ratio << endl;
        }
        // catch(DivideByZero &except){ // Catches a specific exception(DivideByZero in this case):
        //   cout << except.what() << endl;
        // }
        catch (...) { // Cathes all kinds of exceptions.
                cout << "Exception thrown and caught" << endl;
        }

        return 0;
}
