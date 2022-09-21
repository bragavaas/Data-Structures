#pragma once
#include<iostream>
#include <memory>
#include "No.h"

using namespace std;

class ListaEncadeada
{
public:
	void inserir_no_inicio(int param_valor);
	void busca_por_valor(int param_valor);
	void remover_do_inicio();
	~ListaEncadeada();

	friend ostream& operator << (ostream& os, const ListaEncadeada& listaencadeada);

private:
	void clean();
	unique_ptr <No> head;
};

