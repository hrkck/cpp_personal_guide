#include "iostream"

using namespace std;

int main(){
        // string name;
        // cout << "Enter your name: ";
        // // cin >> name; // "space" is treated as a delimeter
        // getline(cin, name);
        // cout << "Your name is " << name << endl;

        char c;
        c = cin.get();
        do {
                cout.put(c);
                c = cin.get();
        } while (!cin.eof());



        return 0;
}
