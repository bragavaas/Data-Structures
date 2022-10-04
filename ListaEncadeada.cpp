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

void ListaEncadeada::imprimir()
{
	unique_ptr<No> tmp = move(head);
	while (tmp)
	{
		cout << tmp->valor;
		tmp = move(tmp->proximo);
	}
}

void ListaEncadeada::inserir_no_inicio()
{
	cout << "\n Digite o valor a ser inserido no inicio da lista: ";
	int param_v;
	cin >> param_v;
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

void ListaEncadeada::busca_por_valor()
{
	cout << "\n Digite o valor a procurado na lista: ";
	int param_valor;
	cin >> param_valor;
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
