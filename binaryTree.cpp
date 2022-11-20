#include "binaryTree.h"

binaryTree::binaryTree()
{
	raiz = NULL;
}

binaryTree::~binaryTree()
{
	removerNo(raiz);
}

void binaryTree::removerNo(NoBT* no)
{
	if (no != NULL)
	{
		removerNo(no->filho_esq);
		removerNo(no->filho_dir);
		delete no;
	}
}

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
			no = new NoBT(chave);
		}
	}
	else if( chave >= no->valor)
	{
		if (no->filho_dir != NULL)
		{
			inserir(chave, no->filho_dir);
		}
		else
		{
			no = new NoBT(chave);
		}
	}
}

NoBT* binaryTree::busca(int chave, NoBT* no)
{
	if (no != NULL)
	{
		if (chave == no->valor)
			return no;
		if (chave < no->valor)
			return busca(chave, no->filho_esq);
		else
			return busca(chave, no->filho_dir);
	}
	else return NULL;
}

void binaryTree::inserir(int chave)
{
	if (raiz != NULL)
		inserir(chave, raiz);
	else
		raiz = new NoBT(chave);
}

NoBT* binaryTree::busca(int chave)
{
	return busca(chave, raiz);
}

void binaryTree::destruir_arvore()
{
	removerNo(raiz);
}