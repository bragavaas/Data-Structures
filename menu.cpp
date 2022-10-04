#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <regex>
#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "Heap.h"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void Menu::exibeMenuListaEncadeada()
{
	system("CLS");
	cout << "--------------------------------------" << endl;
	cout << "|LISTA ENCADEADA                     |" << endl;
	cout << "--------------------------------------" << endl;
	cout << "|Menu Op| Opcao                       " << endl;
	cout << "--------------------------------------" << endl;
	cout << "|   0   | Voltar para Menu principal |" << endl;
	cout << "|   1   | Inserir no inicio          |" << endl;
	cout << "|   2   | Remove no Inicio.          |" << endl;
	cout << "|   3   | Busca por valor            |" << endl;
	cout << "|   4   | Imprimir lista             |" << endl;
	cout << "--------------------------------------" << endl;

	bool menu_ativo = true;
	
	while (menu_ativo)
	{
		int menu_op = Menu::inputMenu(5);
		cout << "\n Input Menu OP: " << menu_op;

		ListaEncadeada l;

		switch (menu_op)
		{
		case 0:
			cout << "Programa abortado";
			menu_ativo = false;
			break;
		case 1:
			l.inserir_no_inicio();
			break;
		case 2:
			l.remover_do_inicio();
			break;
		case 3:
			l.busca_por_valor();
			break;
		case 4:
			l.imprimir();
			break;
		}
	}

}

void Menu::exibeMenuPilha()
{
	system("CLS");
	cout << "--------------------------------------" << endl;
	cout << "|LISTA ENCADEADA                     |" << endl;
	cout << "--------------------------------------" << endl;
	cout << "|Menu Op| Opcao                       " << endl;
	cout << "--------------------------------------" << endl;
	cout << "|   0   | Voltar para Menu principal |" << endl;
	cout << "|   1   | Inserir no topo            |" << endl;
	cout << "|   2   | Pilha cheia?               |" << endl;
	cout << "|   3   | Pilha vazia?               |" << endl;
	cout << "|   4   | Imprimir pilha             |" << endl;
	cout << "--------------------------------------" << endl;
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

	int menu_op = Menu::inputMenu(5);
	cout << "Menu OP: " << menu_op;

	switch ( menu_op )
	{
		case 0:
			cout << "Programa abortado";
			break;
		case 1:
			exibeMenuListaEncadeada();
			break;
		case 2:
			exibeMenuPilha();
			break;
		case 3:
			exibeMenuHeap();
			break;
		case 4:
			exibeMenuHash();
			break;
	}
}

int Menu::inputMenu(int maxVal)
{
	string s;
	bool input_valid = false;
	while (!input_valid)
	{
		cout << "\n Entre com seu input: ";
		getline(cin, s);
		regex exp("([0-"+to_string(maxVal)+"]{1})");
		(regex_match(s, exp) == true) ? input_valid = true : input_valid = false;
	}
	return stoi(s);
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
