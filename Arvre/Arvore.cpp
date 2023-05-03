#include "Arvore.h"

Arvore::Arvore()
{
	raiz = NULL;
}

void Arvore::setRaiz(Node* valor)
{
	raiz = valor;
}

Node* Arvore::getRaiz()
{
	return raiz;
}

void Arvore::print()
{
	print(raiz);
}

void Arvore::print(Node* no)
{
	if (no == NULL) {
		cout << "()";
		return;
	}
	cout << "("
		<< no->getValue();
	print(no->getLeft());
	print(no->getRight());
	cout << ")";
	
}

void Arvore::insert(int value)
{
	if (raiz == nullptr) {
			raiz = new Node(value);
	}
	else
		insert(value, raiz);	
}

void Arvore::insert(int valor, Node *no)
{
	if (no == NULL) {
		no = new Node(valor);
		return;
	}

	
	if (valor < no->getValue()) {
		if (no->getLeft() == nullptr) {
			Node* aux = new Node(valor);
			no->setLeft(aux);
		}
		else {
			insert(valor, no->getLeft());
		}
	}
	else if (valor > no->getValue()) {
		if (no->getRight() == nullptr) {
			Node* aux = new Node(valor);
			no->setRight(aux);
		}
		else {
			insert(valor, no->getRight());
		}
	}
}

bool Arvore::exist(int value)
{
	return exist(raiz,value);
}

bool Arvore::exist(Node* no, int value)
{
	if (no == nullptr) {
		return false;
	}

	if (no->getValue() == value) {
		return true;
	}

	if (value < no->getValue()) {
		return exist(no->getLeft(), value);
	}
	else {
		return exist(no->getRight(), value);
	}
}

void Arvore::search(int valor)
{
	search(raiz,valor);
}

Node* Arvore::search(Node* no, int valor)
{
	if (exist(no,valor)) {
		if (no->getValue() == valor) {
			cout << "Valor " << no->getValue() << " encontrado!" << endl;
			return no;
		}
		if (valor < no->getValue()) {
			return search(no->getLeft(), valor);
		}
		else {
			return search(no->getRight(), valor);
		}
	}
	cout << "Valor não encontrado!" << endl;
	return no;
}


