#pragma once
#include <string>


class Menu
{
private:
	static void exibeMenuListaEncadeada();
	static void exibeMenuPilha();
	static void exibeMenuHeap();
	static void exibeMenuHash();
public:
	static void exibeMenuPrincipal();
	static int inputMenu(int maxVal);
	static void retornarAoMenuPrincipal();
};

