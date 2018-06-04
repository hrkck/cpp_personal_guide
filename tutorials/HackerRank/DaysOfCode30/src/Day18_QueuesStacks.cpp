/*

* Link to the problem:
* https://www.hackerrank.com/challenges/30-queues-stacks/problem
*/


#include "../include/day18.h"


void Solution::pushCharacter(char c){
  myStack.push(c);
}

void Solution::enqueueCharacter(char c){
  myQueue.push(c);
}

char Solution::popCharacter(){
  char c = myStack.top();
  myStack.pop();
  return c;
}

char Solution::dequeueCharacter(){
  char c = myQueue.front();
  myQueue.pop();
  return c;
}


int day18() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (unsigned int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (unsigned int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
