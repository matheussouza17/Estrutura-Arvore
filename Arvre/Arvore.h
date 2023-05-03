#pragma once
#include "Node.h"
class Arvore
{
private:
	Node* raiz;
	//Node* nozin;

public:
	Arvore();
	void setRaiz(Node*);

	Node* getRaiz();

	void print();
	void print(Node*);

	void insert(int value);
	void insert(int,Node*);

	bool exist(int value);
	bool exist(Node* no, int value);

	void search(int valor);
	Node* search(Node* no, int valor);
};

