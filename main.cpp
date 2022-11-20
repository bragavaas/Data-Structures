#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "HashTable.h";
#include "binaryTree.h";
#include "NoBT.h";
#include <cstdlib>

using namespace std;


int main()
{
	NoBT* raiz = NULL;
	binaryTree abb = binaryTree(raiz);

	for (int i=0; i < 10; i++)
	{
		NoBT* no = new NoBT();
		abb.inserir(no, i);
	}
}