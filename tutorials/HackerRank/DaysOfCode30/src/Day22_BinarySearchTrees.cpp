/*
 * Day22_BinarySearchTrees.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: archer
 *
 * Link to the Problem:
 * https://www.hackerrank.com/challenges/30-binary-search-trees/problem
 *
 */

#include "../include/day22.h"


class Node{
public:
	int data;
	Node *left;
	Node *right;
	Node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

class Solution{
public:
	Node* insert(Node* root, int data) {
		if(root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if(data <= root->data){
				cur = insert(root->left, data);
				root->left = cur;
			}
			else{
				cur = insert(root->right, data);
				root->right = cur;
			}

			return root;
		}
	}

	int getHeight(Node* root){
		if(!root) {
			return -1;
		}
		int leftDepth = getHeight(root->left);
		int rightDepth = getHeight(root->right);

		return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
	}
};


int day22() {
	Solution myTree;
	Node* root = NULL;
	int t;
	int data;

	cin >> t;

	while(t-- > 0){
		cin >> data;
		root = myTree.insert(root, data);
	}
	int height = myTree.getHeight(root);
	cout << height;

	return 0;
}

