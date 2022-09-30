#include "Pilha.h"

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

int Pilha::is_vazia()
{
	return (topo == 1 ) ? 1 : 0;
}

int Pilha::is_cheia()
{
	return (topo == (tam-1)) ? 1 : 0;
}

void Pilha::imprimir()
{
}

int 