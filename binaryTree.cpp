#include "binaryTree.h"
#include <iostream>

using namespace std;

binaryTree::binaryTree()
{
	raiz = NULL;
}

binaryTree::~binaryTree()
{
	removerNo(raiz);
}

//Metodo publico para remover no
void binaryTree::removerNo(int k)
{
	removerNo( busca(k) );
}
//Metodo privado para remover no
void binaryTree::removerNo(NoBT* no)
{
	if (no != NULL)
	{
		removerNo(no->filho_esq);
		removerNo(no->filho_dir);
		delete no;
	}
}

//Metodo publico de busca
NoBT* binaryTree::busca(int chave)
{
	return busca(chave, raiz);
}
//Metodo privado de busca
NoBT* binaryTree::busca(int chave, NoBT* no)
{
	if (no == NULL || no->valor == chave)
	{
		return no;
	}
	else if (chave < no->valor)
	{
		busca(chave, no->filho_esq);
	}
	else
	{
		busca(chave, no->filho_dir);
	}
}

void binaryTree::inOrderWalk()
{
	inOrderWalk(raiz);
}

//metodo publico para inserir
void binaryTree::inserir(int chave)
{
	if (raiz != NULL)
		inserir(chave, raiz);
	else
		raiz = new NoBT(chave);
}
//metodo privado para inserir
void binaryTree::inserir(int chave, NoBT* no)
{
	if (chave < no->valor)
	{
		if (no->filho_esq != NULL)
		{
			inserir(chave, no->filho_esq);
		}
		else
		{
			no->filho_esq = new NoBT(chave);
		}
	}
	else if (chave >= no->valor)
	{
		if (no->filho_dir != NULL)
		{
			inserir(chave, no->filho_dir);
		}
		else
		{
			no->filho_dir = new NoBT(chave);
		}
	}
}
void binaryTree::inOrderWalk(NoBT* no)
{
	if (no != NULL)
	{
		inOrderWalk(no->filho_esq);
		cout << no->valor << "->";
		inOrderWalk(no->filho_dir);
	}
}
void binaryTree::destruir_arvore()
{
	removerNo(raiz);
}
int binaryTree::buscaMin(NoBT* no)
{
	if (no == NULL)
		return -1;
	else if (no->filho_esq == NULL)
		return no->valor;
	else
		return buscaMin(no->filho_esq);
}
int binaryTree::buscaMax(NoBT* no)
{
	if (no == NULL)
		return -1;
	else if (no->filho_dir == NULL)
		return no->valor;
	else
		return buscaMax(no->filho_dir);
}
int binaryTree::sucessor(NoBT* no)
{
	if (no->filho_dir != NULL)
	{
		return buscaMin(no->filho_dir);
	}
}