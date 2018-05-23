#include "iostream"

using namespace std;

template<typename T>
class Stack {
private:
        T datastore[100];
        int top;
public:
        Stack(){
                top = -1;
        }

        void push(int num){
                ++top;
                datastore[top] = num;
        }
        T pop(){
                T val = datastore[top];
                --top;
                return val;
        }
        T peek(){
                return datastore[top];
        }
};

template<>
class Stack<string>{
private:
        string datastore[100];
        int top;
public:
        Stack(){
                top = -1;
        }
        void push(string text){
                ++top;
                datastore[top] = text;
        }
        string pop(){
                string val = datastore[top];
                datastore[top] = "";
                --top;
                return val;
        }
        string peek(){
                return datastore[top];
        }
};

int main(){
        // Stack<int> numbers;
        // numbers.push(23);
        // numbers.push(210);
        // numbers.push(12);
        // cout << numbers.peek() << endl;
        // int value = numbers.pop();
        // cout << numbers.peek() << endl;

        Stack<string> names;
        names.push("rizaq");
        names.push("alai");
        names.push("summyirtyo");
        cout << names.pop() << endl;
        cout << names.pop() << endl;
        cout << names.peek() << endl;




        return 0;
}
