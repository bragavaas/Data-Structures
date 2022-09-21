#include "ListaEncadeada.h"

int main()
{
	ListaEncadeada l;
	l.inserir_no_inicio(1);
	l.inserir_no_inicio(14);
	l.inserir_no_inicio(512);
	l.inserir_no_inicio(121);
	l.inserir_no_inicio(179);
	cout << "Lista: " << l << endl;
	l.remover_do_inicio();
	cout << "Lista: " << l << endl;
	l.busca_por_valor(14);
	

}