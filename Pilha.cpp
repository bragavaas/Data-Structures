#include "Pilha.h"
#include "iostream"

using namespace std;

Pilha::Pilha()
{
	topo = -1;
}

int Pilha::insere_topo(int n)
{
	if( is_cheia() )
	{
		return 0;
	}
	++topo;
	num[topo] = n;
	return n;
}

int Pilha::remove_topo()
{
	int temp;
	if (is_vazia())
	{
		return 0;
	}
	temp = num[topo];
	--topo;
	return temp;

}

bool Pilha::is_vazia()
{
	return (topo == 1 ) ? true : false;
}

bool Pilha::is_cheia()
{
	return (topo == (tam-1)) ? true : false;
}

void Pilha::imprimir()
{
	int i; //for loop
	cout << "Imprimindo pilha: ";
	for (i = (topo); i >= 0; i--)
		cout << num[i] << " ";
	cout << endl;
}

