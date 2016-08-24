#include "iostream"
#include "deque"
#include "string"

// QUE is FILO container
// DEQUE is like a enhanced QUE

using namespace std;

// Prototyping
string upper_me(string lower);
template<typename T>
void display(deque<T> deqoy);
template<typename T>
int find(deque<T> deqoy, T value);


// Uppercasing any given string, returns the uppercase string
string upper_me(string lower){
        for (size_t i = 0; i < lower.size(); i++) {
                lower[i] = toupper(lower[i]);
        }
        return lower;
}

// displays any given deque
template<typename T>
void display(deque<T> deqoy){
        cout << endl;
        for (size_t i = 0; i < deqoy.size(); i++) {
                cout << deqoy[i] << endl;
        }
        cout << endl;
}

// Finds any given value in items of a deque, prints the position of the item in the deque if the value is found.
// if the value is not found, returns -1.
template<typename T>
int find(deque<T> deqoy, T value){
        // Everything converted to uppercase, so user can enter whatever they want:
        // But first, creating impostors so originals are not affected:
        deque<T> uppercase_deqoy = deqoy;
        T uppercase_value = value;
        for (size_t i = 0; i < uppercase_deqoy.size(); i++) {
                uppercase_deqoy[i] = upper_me(uppercase_deqoy[i]);
        }
        uppercase_value = upper_me(uppercase_value);

        // Looping through the "uppercase_deqoy" and searching for the "uppercase_value"
        for (size_t i = 0; i < uppercase_deqoy.size(); i++) {
                if (uppercase_deqoy[i].find(uppercase_value) != std::string::npos) {
                        cout << value << " found at position: " << i << endl;
                        return 0;
                }
        }
        cout << value << " could not be found. Returning: -1" << endl;
}


int main(){
        deque<string> line;

        line.push_back("David 0");
        line.push_back("Moby Dick 1");
        line.push_back("Mark Twain 2");
        line.push_back("James Wattson 3");
        line.push_back("Nicole Kidman 4");
        display(line);

        // removing from end and beginning
        line.pop_back();
        line.pop_front();
        display(line);

        // Testing 'find' function
        // string name;
        // cout << "Type a name to find: ";
        // getline(cin, name);
        // find(line, name);

        // inserting to an item with iterator
        deque<string>::iterator iter = line.begin();
        ++iter;
        line.insert(iter, "Donnie Darko");
        display(line);
}
