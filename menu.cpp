#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <regex>
#include "Menu.h"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void Menu::exibeMenuListaEncadeada()
{
	system("CLS");
	cout << "\n\n-------------------------------" << endl;
	cout << "Menu principal da Lista Encadeada" << endl;

}

void Menu::exibeMenuPilha()
{
	system("CLS");
	cout << "\n\n-------------------------------" << endl;
	cout << "Menu principal da Pilha" << endl;
}

void Menu::exibeMenuHeap()
{
	cout << "\n\n-------------------------------" << endl;
	cout << "Menu principal da Heap" << endl;
	system("CLS");
}

void Menu::exibeMenuHash()
{
	system("CLS");
	cout << "\n\n-------------------------------" << endl;
	cout << "Menu principal da Hash Table" << endl;
}

void Menu::exibeMenuPrincipal()
{
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "|MENU DE OPERACOES                                                                                         |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "|Menu Op| Algoritmo         | Significado                                                                  |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "|   0   | Sair              | Termina execucao do programa                                                 |" << endl;
	cout << "|   1   | Lista Encadeada   | Encadeia elementos simples atraves de ponteiro.                              |" << endl;
	cout << "|   2   | Pilha             | Armazenamento sequencial empilhando elementos um item acima do outro.        |" << endl;
	cout << "|   3   | Heap              | Arvore binaria. Similar a uma fila de prioridade.                            |" << endl;
	cout << "|   4   | Hash Table        | Enderecamento direto através de tabelas de dispersão.                        |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
}

string Menu::inputMenu()
{
	string s;
	bool input_valid = false;
	while (!input_valid)
	{
		cout << "\n Entre com seu input: ";
		getline(cin, s);
		regex exp("([0-4]{1})");
		(regex_match(s, exp) == true) ? input_valid = true : input_valid = false;
	}
	return s;
}

void Menu::retornarAoMenuPrincipal()
{
	char option;
	cout << "\n Deseja voltar ao menu principal? (S/N)";
	cin >> option;
	while (option != 'S')
	{
		cout << "\n Deseja voltar ao menu principal? (S/N)";
		cin >> option;
	}
}
