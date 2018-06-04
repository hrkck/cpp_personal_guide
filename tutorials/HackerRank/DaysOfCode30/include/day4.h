/*
 * day4.h
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 */

#ifndef DAYSOFCODE30_DAY4_H_
#define DAYSOFCODE30_DAY4_H_

#include <iostream>

using namespace std;

int day4();

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};


#endif /* DAYSOFCODE30_DAY4_H_ */
