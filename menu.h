#pragma once
class Menu
{
private:
	static void exibeMenuListaEncadeada();
	static void exibeMenuPilha();
	static void exibeMenuHeap();
	static void exibeMenuHash();
public:
	static void exibeMenuPrincipal();
	static string inputMenu();
	static void retornarAoMenuPrincipal();
};

