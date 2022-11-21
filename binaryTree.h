#include "NoBT.h"
#pragma once

class binaryTree
{
private:
	void inserir(int chave, NoBT* no);
	void removerNo(NoBT* no);
	NoBT* busca(int chave, NoBT* no);
	void inOrderWalk(NoBT* no);

	NoBT* raiz;
public:
	binaryTree();
	~binaryTree();

	void inserir(int chave);
	void destruir_arvore();
	NoBT* busca(int chave);
	void inOrderWalk();

};

