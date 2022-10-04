#include "Heap.h"
#include <iostream>
using std::vector;
using std::cout;
using std::endl;


void MaxHeap::inserirItem(int val)
{
	if (_tamanho + 1 >= vetor.size())
	{
		vetor.push_back(0);
	}
	vetor[++_tamanho] = val;
	shiftUp(_tamanho);
	return;
}

void MaxHeap::shiftUp(int index)
{
	//out of bounds
	if (index > _tamanho) return;

	//condicao base de recursão
	if (index == 1) return;

	//Troca se o filho for maior que o pai para respeitar condicao de MAX HEAP
	if (vetor[index] > vetor[pai(index)])
	{
		std::swap(vetor[pai(index)], vetor[index]);
	}
	shiftUp( pai(index) );
}

void MaxHeap::shiftDown(int index)
{
	//out of bounds
	if (index > _tamanho) return;

	int swapId = index;

	//condicao base de recursão
	if (index == 1) return;

	//Troca se o filho for maior que o pai para respeitar condicao de MAX HEAP
	if (filho_esq(index) <= _tamanho && vetor[index] < vetor[ filho_esq(index) ])
	{
		swapId = index;
	}
	if (filho_dir(index) <= _tamanho && vetor[swapId] < vetor[ filho_dir(index) ])
	{
		swapId = filho_dir(index);
	}

	 if(swapId != index)
	 {
		std::swap(vetor[index], vetor[swapId]);
		shiftDown(swapId);
	 }
	 return;
}

int MaxHeap::extrairMax()
{
	int maxNum = vetor[1];
	std::swap(vetor[1], vetor[_tamanho]);
	shiftDown(1);
	return maxNum;
}

