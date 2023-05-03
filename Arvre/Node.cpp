#include "Node.h"

void Node::setValue(int vall)
{
	value = vall;
}

void Node::setLeft(Node* l)
{
	Left = l;
}

void Node::setRight(Node* r)
{
	Right = r;
}

Node* Node::getLeft()
{
	return Left;
}

Node* Node::getRight()
{
	return Right;
}

int Node::getValue()
{
	return value;
}

Node::Node(int value)
{
	this->value = value;
	Left = NULL;
	Right = NULL;
}

Node::~Node()
{
	delete Left;
	delete Right;
}

void Node::print(Node* arvoreemingles)
{
	if (arvoreemingles == NULL) {
		cout << "()";
		return;
	}
	cout << "("
		<< arvoreemingles->value;
	print(arvoreemingles->Left);
	print(arvoreemingles->Right);
	cout << ")";
	
}


