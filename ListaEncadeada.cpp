#include <iostream>
#include "ListaEncadeada.h"
#include "No.h"

using namespace std;

ListaEncadeada::~ListaEncadeada()
{
	clean();
}

void ListaEncadeada::clean()
{
	while (head)
	{
		head = move(head->proximo);
	}
}
ostream& operator<<(ostream& os, const ListaEncadeada& listaencadeada)
{
	No* head = listaencadeada.head.get();
	while (head)
	{
		os << head->valor << ' ';
		head = head->proximo.get();
	}
	return os;
}

void ListaEncadeada::inserir_no_inicio(int param_v)
{
	auto tmp{ make_unique<No>(param_v) };
	tmp->valor = param_v;
	tmp->proximo = move(head);
	head = move(tmp);
}

void ListaEncadeada::remover_do_inicio()
{
	if (head == NULL)
	{
		cout << "Lista esta vazia" << endl;
		return;
	}
	else
	{
		cout << "Elemento que sera removido: " << head->valor << endl;
		unique_ptr<No> tmp = move(head);
		head = move(tmp->proximo);
	}
}

void ListaEncadeada::busca_por_valor(int param_valor)
{
	unique_ptr<No> tmp = move(head);
	int pos_na_lista = 1;

	while (tmp->proximo != NULL)
	{
		if (tmp->valor == param_valor)
		{
			cout << "No encontrado na posicao: " << pos_na_lista;
			cout << " | Valor do No: " << tmp->valor;
			return;
		}
		else
		{
			tmp = move(tmp->proximo);
			pos_na_lista++;
		}
	}
}
