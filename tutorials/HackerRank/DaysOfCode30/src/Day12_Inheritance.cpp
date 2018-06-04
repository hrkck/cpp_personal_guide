/*
 * Day12_Inheritance.cpp
 *
 *  Created on: Apr 8, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-inheritance/problem
 *
 */

#include "../include/day12.h"


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};


class Student: public Person {
private:
	vector<int> testScores;
public:
	Student(string fN, string lN, int ID) :
		Person(fN, lN, ID) {
			this->firstName = fN;
			this->lastName = lN;
			this->id = ID;
		}

	Student(string fN, string lN, int ID, vector<int> testScores):
		Person(fN, lN, ID) {
			this->firstName = fN;
			this->lastName = lN;
			this->id = ID;
			this->testScores = testScores;
		}

	char calculate() {
		int avg = 0;
		int grade = 0;
		for (int i = 0; i < testScores.size(); i++) {
			grade += testScores[i];
		}
		avg = grade / testScores.size();
		if((avg >= 90) && (avg <= 100)) { return 'O'; }
		else if((avg >= 80) && (avg < 90)) { return 'E'; }
		else if((avg >= 70) && (avg < 80)) { return 'A'; }
		else if((avg >= 55) && (avg < 70)) { return 'P'; }
		else if((avg >= 40) && (avg < 55)) { return 'D'; }
		else if(avg < 40) { return 'T'; }
		else { return 'Z'; }
	}

	void printGrade() {
		cout << "Grade: " << this->calculate() << "\n";
	}
};


int day12() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
