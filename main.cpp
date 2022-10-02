#include "ListaEncadeada.h"
#include "Pilha.h"

int main()
{
	Pilha p;
	for (int i = 0; i < 10; i++)
	{
		p.insere_topo(i);
		
	}
	p.imprimir();
	p.remove_topo();
	p.imprimir();
	

}