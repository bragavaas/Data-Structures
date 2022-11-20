#include "Heap.h"
#pragma once
class TreeWalk : public MaxHeap
{
	MaxHeap raiz;


	private:
		void auxprint2d(MaxHeap* raiz, int space);
	public:
		void print2d(MaxHeap* raiz);
};

