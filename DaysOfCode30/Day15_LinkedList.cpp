/*
 * Day15_LinkedList.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-linked-list/problem
 *
 */

#include "day15.h"


class Node {
public:
	int data;
	Node *next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};


class Solution {
public:

	/*
	 * This beautiful solution was described in this comment:
	 * https://www.hackerrank.com/challenges/30-linked-list/forum/comments/130368
	 *
	 * Another great read:
	 * Linus's understanding on pointers:
	 * https://grisha.org/blog/2013/04/02/linus-on-understanding-pointers/
	 *
	 * */
    Node* insert(Node *head,int data) {
      Node** pp = &head;
      while(*pp) pp = &((*pp)->next);
      *pp = new Node(data);
      return head;
}

	void display(Node *head) {
		Node *start = head;
		while (start) {
			cout << start->data << " ";
			start = start->next;
		}
	}
};


int day15() {
	Node* head = NULL;
	Solution mylist;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		head = mylist.insert(head, data);
	}
	mylist.display(head);

	return 0;
}
