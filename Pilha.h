#pragma once

#define tam 100
class Pilha
{
private:
	int num[tam];
	int topo;
public:
	Pilha();
	int insere_topo(int);
	int remove_topo();
	bool is_vazia();
	bool is_cheia();
	void imprimir();
};

