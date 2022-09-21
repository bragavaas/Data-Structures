#pragma once

struct No {
	int valor;
	No* proximo;

	No(int param_valor, No* param_proximo = nullptr)
	{
		valor = param_valor;
		proximo = param_proximo;
	};
};

class lista_encadeada
{
private:
	No* raiz = nullptr;

public:
	lista_encadeada():raiz(nullptr)
	{

	}
	void inserirInicio(int valor);
	void buscar(int k);
	void imprimir();
};

