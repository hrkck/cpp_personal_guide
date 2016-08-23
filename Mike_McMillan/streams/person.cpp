#include "iostream"
#include "sstream"

using namespace std;

class Person {
private:
        string first, middle, last;
        int age;
public:
        Person(string f, string m, string l, int a){
                first = f;
                middle = m;
                last = l;
                age = a;
        }
        string toString(){
                stringstream stm;
                stm << first << " " << middle << " " << last << " " << age;
                return stm.str();
                // return first + " " + middle + " " + last + " " + age; // This does not work because concentenating does not work.
        }
};

int main(){
        Person aPerson("Hakki", "Riza", "Kucuk", 12);
        cout << aPerson.toString() << endl;
        return 0;
}
