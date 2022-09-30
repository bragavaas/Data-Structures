#pragma once

#define tam 5
class Pilha
{
private:
	int num[tam];
	int topo;
public:
	Pilha();
	int insere_topo(int);
	int remove_topo();
	int is_vazia();
	int is_cheia();
	void imprimir();
};

