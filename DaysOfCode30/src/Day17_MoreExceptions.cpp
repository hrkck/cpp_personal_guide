/*
 * Day9_Recursion.cpp
 *
 *  Created on: May 23, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-more-exceptions/problem
 *
 */

#include "../include/day17.h"

Calculator::Calculator(){
  //
}

int Calculator::power(int n, int p){
  int r = 0;
  if(n < 0 || p < 0){
    throw invalid_argument("n and p should be non-negative");
    return -1;
  }else{
    r = pow(n, p);
  }

  return r;
}

int day17(){
  Calculator myCalculator=Calculator();
  int T,n,p;
  cout << "Tell me how many pairs will you enter:" << endl;
  cin>>T;
  while(T-->0){
    cout << "tell me a pair of number with space in between:" << endl;
    if(scanf("%d %d",&n,&p)==2){
       try{
             int ans=myCalculator.power(n,p);
             cout<<ans<<endl;
       }
       catch(exception& e){
           cout<<e.what()<<endl;
       }
    }
  }
  return 0;
}
