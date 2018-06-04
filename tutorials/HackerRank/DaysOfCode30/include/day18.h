#ifndef DAYSOFCODE30_DAY18
#define DAYSOFCODE30_DAY18

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int day18();

class Solution {
private:
  stack<char> myStack;
  queue<char> myQueue;
public:
  void pushCharacter(char c);
  void enqueueCharacter(char c);
  char popCharacter();
  char dequeueCharacter();
};


#endif
