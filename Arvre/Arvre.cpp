#include "Arvore.h"

int main()
{
	Arvore arvre;
	arvre.insert(15);
	arvre.insert(10);
	arvre.insert(30);
	arvre.insert(5);
	arvre.insert(25);
	arvre.insert(35);

	arvre.insert(0);
	arvre.insert(20);
	arvre.insert(40);

	arvre.search(5);
	arvre.print();

	return 0;
}
