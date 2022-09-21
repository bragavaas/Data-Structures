#include "lista_encadeada.h"
#include <iostream>

using namespace std;
void lista_encadeada::inserirInicio(int valor)
{
	if (raiz == NULL)
	{
		raiz = new No(valor);
	}
	else
	{
		No* noAtual = raiz;
		while (noAtual->proximo != NULL)
		{
			noAtual = noAtual->proximo;
		}
		No* temp = new No(valor, noAtual);
		noAtual->proximo = temp;
	}
}
void lista_encadeada::imprimir()
{
	cout << "******************" << endl;
	cout << "Imprimindo lista" << endl;
	
	No* noAtual = raiz;
	while (noAtual != NULL)
	{
		cout << noAtual->valor << " -> ";
		noAtual = noAtual->proximo;
	}
}