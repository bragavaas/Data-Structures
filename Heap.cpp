#include "Heap.h"

void Heap::buildHeap(int x)
{
	cout << "\nConstruindo a HEAP";
	int indice_inicial = (array.size() / 2) - 1;

	for (int i = indice_inicial; i>=0; i--)
	{
		heapify(i);
	}
}

void Heap::heapify(int raiz_da_heap)
{
	int maior_elemento = raiz_da_heap;
	int no_esq = 2 * maior_elemento + 1;
	int no_dir = 2 * maior_elemento + 1;

	if (no_esq < array.size() && array[no_esq] > array[maior_elemento])
	{
		maior_elemento = no_esq;
	}
	if (no_dir < array.size() && array[no_dir] > array[maior_elemento])
	{
		maior_elemento = no_dir;
	}
	if (maior_elemento != raiz_da_heap)
	{
		swap(array[raiz_da_heap], array[maior_elemento]);
		heapify(maior_elemento);
	}
}

void Heap::imprime()
{
	cout << "Imprimindo Heap" << endl;

	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
}
