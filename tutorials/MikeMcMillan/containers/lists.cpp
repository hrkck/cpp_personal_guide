#include "iostream"
#include "list"

using namespace std;

// display any given list by an iterator
template <typename T> void display(list<T> lyst) {
  typename list<T>::iterator iter = lyst.begin();
  cout << endl;
  while (iter != lyst.end()) {
    cout << *iter << endl;
    ++iter;
  }
  cout << endl;
}

int main() {
  list<string> names;

  // adding at the end:
  names.push_back("Hakki");
  names.push_back("Riza");
  names.push_back("Kucuk");
  // adding at the beginning:
  names.push_front("Junior");
  // pretty much self-explanatory
  display(names);

  cout << "first item: " << names.front() << endl;
  cout << "Last item: " << names.back() << endl;

  // Reversing
  names.reverse();
  display(names);

  // Sorting
  names.sort();
  display(names);

  // removing particular item
  names.remove("Junior");
  display(names);

  // popping out of list
  names.pop_front(); // removing from beginning
  names.pop_back();  // removing from end
  display(names);

  // clearing a list and checking if it is empty
  names.clear();
  if (names.empty()) {
    cout << "list is empty" << endl;
  } else {
    cout << "list is not empty" << endl;
  }
  // *displays nothing*
  display(names);

  return 0;
}
