#include "iostream"
#include "sstream"
#include "string"
#include "vector"

using namespace std;

// base class
class Employee {
protected:
        string name;
        double pay;
public:
        Employee(){
                name = "";
                pay = 0;
        }
        Employee(string empName, double payRate){
                name = empName;
                pay = payRate;
        }
        ~Employee() {
                // free allocated memories
        }
        string getName() {
                return name;
        }
        void setName(string empName){
                name = empName;
        }
        double getPay(){
                return pay;
        }
        void setPay(double payRate){
                pay = payRate;
        }
        string toString(){
                stringstream stm;
                stm << name << ": " << pay;
                return stm.str();
        }
        // Polymorhpism
        virtual double grossPay(int hours){
                return pay * hours;
        }
        // virtual ~Employee ();
};

// derived class
class Manager : public Employee {
private:
        bool salaried;
public:
        // default constructor
        Manager() : salaried(true) {
        }
        // parametrized constructor
        Manager(string name, double payRate, bool isSalaried)
                : Employee(name, payRate){
                salaried = isSalaried;
        }
        // deconstructor
        ~Manager() {
                // free allocated memories/resources
        }
        bool getSalaried(){
                return salaried;
        }
        virtual double grossPay(int hours){
                if (salaried) {
                        return pay;
                } else {
                        return pay * hours;
                }
        }
        string toString(){
                stringstream stm;
                string salary;
                if (salaried) {
                        salary = "Salaried";
                } else {
                        salary = "Hourly";
                }
                stm << name << ": " << pay << ": " << salary << endl;
                return stm.str();
        }
};


int main(){
        // Test for BASE CLASS
        // Employee emp1("Mike Thunderson", 1200);
        // Employee emp2("Kime Kimo", 2100);
        // emp1.toString();
        // emp2.toString();
        // cout << emp1.toString() << endl;
        // cout << emp2.toString() << endl;

        // Test for DERIVED CLASS
        // Employee emp1("Jamey Jackott", 20300);
        // cout << "Employee name: " << emp1.getName() << endl;
        // cout << "Employee pay rate: " << emp1.getPay() << endl;
        // cout << "Employee gross pay: " << emp1.grossPay(40) <<  endl;
        // Manager emp2("Boss McCandBooos", 40600, true);
        // cout << "Employee name: " << emp2.getName() << endl;
        // cout << "Employee pay rate: " << emp2.getPay() << endl;
        // cout << "Is " << emp2.getName() << " salaried? >> " << (emp2.getSalaried()?"Yes.":"No.") << endl;
        // cout << "Emp2 gross pay: " << emp2.grossPay(20) << endl;
        // cout << emp2.toString() << endl;


        Employee emp1("Jones", 25.00);
        Manager mgr1("Smith", 1200, true);

        Employee* empPtr;
        empPtr = &emp1;
        cout << "Name: " << empPtr->getName() << endl;
        cout << "Pay: " << empPtr->grossPay(40) << endl;
        empPtr = &mgr1;
        cout << "Name: " << empPtr->getName() << endl;
        cout << "Pay: " << empPtr->grossPay(40) << endl;

        vector<Employee*> emps;

        emps.push_back(&emp1);
        emps.push_back(&mgr1);


        for (size_t i = 0; i < emps.size(); i++) {
                cout << "Name: " << emps[i]->getName() << endl;
                cout << "Pay: " << emps[i]->grossPay(40) << endl;
        }
        return 0;
}
