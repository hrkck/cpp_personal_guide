#include "iostream"

using namespace std;

class Animal {
public:
        virtual void talk() = 0;
};

class Dog : public Animal {
public:
        virtual void talk(){
                cout << "HAVB HAV!" << endl;
        }
};

class Cat : public Animal {
public:
        virtual void talk(){
                cout << "Miyavv..." << endl;
        }
};

int main(){
        Dog rough;
        Cat ipek;
        rough.talk();
        ipek.talk();

        return 0;
}
