#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "Heap.h"
int main()
{
	Heap h;
	int N = h.array.size() / h.array[0];
	cout << "N: " << N << endl;
	h.buildHeap(N);
	h.imprime();

	

}