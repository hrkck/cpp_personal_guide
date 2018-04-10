/*
 * Day13_AbstractClasses.cpp
 *
 *  Created on: Apr 10, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-abstract-classes/problem
 *
 */

#include "day13.h"


class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};


class MyBook: public Book{
protected:
	int price;
public:
	MyBook(string t, string a, int p): Book(t, a){
		this->title = t;
		this->author = a;
		this->price = p;
	}

	void display(){
		cout << "Title: " << this->title << endl;
		cout << "Author: " << this->author << endl;
		cout << "Price: " << this->price << endl;
	}
};


int day13() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

