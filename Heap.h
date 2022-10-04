#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
	int _tamanho{};
	vector<int> vetor = { -1 };

	int pai(int index) { return index >> 1; };
	int filho_esq(int index) { return index << 1; };
	int filho_dir(int index) { return (index << 1) + 1; };

public:
	bool is_Vazia() const { return _tamanho == 0; };
	int getMaxValor() const { return vetor[1]; };
	void inserirItem(int val);
	void shiftUp(int index);
	int extrairMax();
	void imprimir();
	void shiftDown(int index);
};


