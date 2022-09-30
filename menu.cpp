#include "menu.h"
#include "datamgt.hpp"
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int menu::exibeMenuPrincipal()
{
	system("CLS");
	cout << "\n\n--------------------------------" << endl;
	cout << "MENU PRINCIPAL DA ULA" << endl;
	cout << "0. (001) Sair" << endl;
	cout << "1. (001) Definir registrador A" << endl;
	cout << "2. (010) Definir registrador B" << endl;
	cout << "3. (011) Ler registrador A (Acc)" << endl;
	cout << "4. (100) Ler registrador B" << endl;
	cout << "5. (101) Ler registrador de Flags" << endl;
	cout << "6. (110) Definir Operação" << endl;
	cout << "7. (111) Executar ULA" << endl;
	cout << "--------------------------------" << endl;
}

int menu::inputMenuPrincipal()
{
	int menuInput;
	menuInput = input_data("Controle de Menu", 3);
	return inputValidoMenu(menuInput) == true ? menuInput : -1;
}
bool menu::inputValidoMenu(int menuOP)
{
	if ( ((menuOP - 1) <= (8 - 1) ) )return true;
	else
	{
		return false;
	}
}

