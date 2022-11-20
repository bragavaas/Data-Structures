#include "binaryTree.h"

binaryTree::binaryTree()
{
	raiz = NULL;
}

binaryTree::~binaryTree()
{
	destruir_arvore(raiz);
}

void binaryTree::destruir_arvore(NoBT* no)
{
	if (no != NULL)
	{
		destruir_arvore(no->filho_esq);
		destruir_arvore(no->filho_dir);
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

