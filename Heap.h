#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Heap
{
public:vector<int> array = { 1, 3, 4, 5, 6, 13, 10, 9, 8, 15, 17 };

public:
	Heap(){}
	void buildHeap(int x);
	void heapify(int maiorElemento);
	int remove_min();
	void imprime();
};

