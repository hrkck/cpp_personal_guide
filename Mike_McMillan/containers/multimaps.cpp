#include "iostream"
#include "map"
#include "utility"

using namespace std;

int main(){
    multimap<string, string> numbers;
    numbers.insert(pair<string, string>("Jones", "1234"));
    numbers.insert(pair<string, string>("Smith", "2345"));
    numbers.insert(pair<string, string>("Jones", "3456"));
    numbers.insert(pair<string, string>("Brown", "4567"));
    numbers.insert(pair<string, string>("Jones", "5678"));

    string searchName = "Jones";
    // What is iterators??
    multimap<string, string>::iterator iter = numbers.find(searchName);
    multimap<string, string>::iterator last = numbers.upper_bound(searchName);
    // How is usage with 'for loop'??
    for (; iter != last; ++iter) {
        cout << iter->first << ": " << iter->second << endl;
    }
    return 0;
}
