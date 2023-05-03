#pragma once
using namespace std;
#include <iostream>

class Node
{
private:
	int value;
	Node* Left;
	Node* Right;
public:
	void setValue(int);
	void setLeft(Node*);
	void setRight(Node*);

	Node* getLeft();
	Node* getRight();
	int getValue();

	Node(int value);

	~Node();
	
	void print(Node* arvoreemingles);
	//void insert(int);
};


