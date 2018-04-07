/*
 * Day4_Class.cpp
 *
 *  Created on: Apr 7, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-class-vs-instance/problem
 *
 */

#include "day4.h"


int day4(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}


Person::Person(int initialAge){
	if(initialAge < 0){
		age = 0;
		cout << "Age is not valid, setting age to 0.\n";
	}else{ age = initialAge; }
}

void Person::amIOld(){
	if(age >= 18){ cout << "You are old.\n"; }
	else if(age >= 13 && age < 18){ cout << "You are a teenager.\n"; }
	else if(age < 13){ cout << "You are young.\n"; }
}

void Person::yearPasses(){
	age++;
}
