#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "HashTable.h";
#include "binaryTree.h";
#include "NoBT.h";
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	binaryTree bst = binaryTree();

	int searchK;
	
	for (int i = 0; i < 10; i++)
	{
		int randNum = rand() % (100 - 1 + 1) + 1;
		bst.inserir(randNum);
		if (i == 5) searchK = randNum;
	}
	cout << "\n\Busca por: " << searchK << endl;
	NoBT* NoSearch = bst.busca(searchK);
	if (NoSearch == NULL)
	{
		cout << "Busca retornou NULL. Chave não encontrada na Árvore." << endl;
		cout << NoSearch;
	}
	else
	{
		cout << "Busca retornou Ponteiro de No. Chave foi encontrada." << endl;
		cout << "Endereço: " << NoSearch;
	}
}