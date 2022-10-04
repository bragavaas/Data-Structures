#pragma once
#include<iostream>
#include <memory>
#include "No.h"

using namespace std;

class ListaEncadeada
{
public:
	void inserir_no_inicio();
	void busca_por_valor();
	void remover_do_inicio();
	void imprimir();
	~ListaEncadeada();

private:
	void clean();
	unique_ptr <No> head;
};

