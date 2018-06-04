/*

Link to the problem:
https://www.hackerrank.com/challenges/30-interfaces/problem
*/

#include "../include/day19.h"


int CalculatorDivisorSum::divisorSum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
      if(n%i == 0){
          sum += i;
      }
  }
  return sum;
}


int day19(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new CalculatorDivisorSum();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
