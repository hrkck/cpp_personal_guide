#include "iostream"
#include "vector"

using namespace std;

int main() {
  vector<int> numbers(10);
  for (size_t i = 1; i < 11; ++i) {
    numbers.push_back(i);
  }
  int total = 0;
  for (size_t i = 0; i < numbers.size(); i++) {
    total += numbers[i];
  }
  cout << "total is: " << total << endl;
  return 0;
}
