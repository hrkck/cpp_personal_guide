#include "iostream"

using namespace std;

namespace minMax{
  int min(int num1, int num2){
    if(num1 < num2){
      return num1;
    }else{
      return num2;
    }
  }

  int max(int num1, int num2){
    if(num1 < num2){
      return num2;
    }else{
      return num1;
    }
  }
}

namespace People{
  class Person{
  private:
    string name;
    string sex;
  public:
    Person(string n, string s){
      name = n;
      sex = s;
    }
    string get(){
      return name + ", " + sex;
    }
  };
}

int main(){
  using namespace minMax;
  using namespace People;
  int a,b;

  cout << "Enter a number: " << endl;
  cin >> a;
  cout << "Enter a number: " << endl;
  cin >> b;
  cout << "Min is: " << min(a,b) << endl;
  cout << "Max is: " << max(a,b) << endl;
  cout << endl;
  Person you("Jeny", "F");
  cout << you.get() << endl;
  return 0;
}
