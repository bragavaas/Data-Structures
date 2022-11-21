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
	//Insere elemento no ultimo elemento
	vetor[++_tamanho] = val;
	//cout << "\n\n_tamanho: " << 1 + _tamanho << " | Vetor Size: " << vetor.size();
	//Corrige a posicao do elemento com a abordagem bottom-up
	shiftUp(_tamanho);
	imprimir();
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

void MaxHeap::max_heapify(vector<int> &input_array, int s, int e)
{
	int l = (s << 1) + 1, r = (s << 1) + 2;

	int largest = s;
	if (l <= e && input_array[l] > input_array[s])
		largest = l;
	if (r <= e && input_array[r] > input_array[largest])
		largest = r;

	if (largest != s)
	{
		swap(input_array[s], input_array[largest]);
		max_heapify(input_array, largest, e);
	}
}

int MaxHeap::extrairMax()
{
	int maxNum = vetor[1];
	std::swap(vetor[1], vetor[_tamanho]);
	shiftDown(1);
	//Se for utilizar Heapsort, utilizar o retorno desta funcao para preencher uma lista ordenada com novos elementos.
	//Se o objetivo for apenas extrair o maximo resultado, manter a linha abaixo, que remove o ultimo indice do vetor.
	vetor.resize(vetor.size() - 1);
	return maxNum;
}

void MaxHeap::imprimir()
{	
	cout << "\n Imprimindo vetor: ";
	for (int i = 1; i < vetor.size(); i++)
	{
		cout << vetor[i] << " ";
	}
	cout << endl;
}

