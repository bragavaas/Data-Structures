#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "Heap.h"
#include "HashTable.h"

using namespace std;

int main()
{
	HashTable h;

	if (h.is_vazia())
	{
		cout << "HT Vazia" << endl;
	}
	else
	{
		cout << "HT nao vazia" << endl;
	}

	h.inserir_Item(905, "Jim");
	h.inserir_Item(925, "Pam");
	h.inserir_Item(427, "Dwight");
	h.inserir_Item(969, "Charlie");
	h.inserir_Item(421, "Half");
	h.inserir_Item(754, "Denise");
	h.inserir_Item(422, "Piazzi");

	h.imprime_Tabela();

	if (h.is_vazia())
	{
		cout << "\nHT Vazia" << endl;
	}
	else
	{
		cout << "\nHT nao vazia" << endl;
	}
}