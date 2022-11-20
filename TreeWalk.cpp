#include "TreeWalk.h"

#define COUNT 10;

void TreeWalk::print2d(MaxHeap* raiz)
{
	auxprint2d(raiz, 0);
}

void TreeWalk::auxprint2d(MaxHeap* raiz, int space)
{
	
	//Caso base da recursao
	if (raiz == NULL)
	{
		return;
	}

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    auxprint2d(raiz., space);

    // Print current node after space
    // count
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    // Process left child
    print2DUtil(root->left, space);
}