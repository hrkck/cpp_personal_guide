#ifndef DAYSOFCODE30_INCLUDE_DAY24_H_
#define DAYSOFCODE30_INCLUDE_DAY24_H_

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d);
};

class Solution{
    public:
        Node* removeDuplicates(Node *head);
        Node* insert(Node *head,int data);
        void display(Node *head);
};
			
int day24();


#endif /* DAYSOFCODE30_INCLUDE_DAY24_H_ */