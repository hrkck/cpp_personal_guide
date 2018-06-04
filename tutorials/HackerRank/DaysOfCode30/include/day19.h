#ifndef DAYSOFCODE30_DAY19
#define DAYSOFCODE30_DAY19

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class CalculatorDivisorSum : public AdvancedArithmetic {
public:
    int divisorSum(int n);
};

int day19();


#endif
