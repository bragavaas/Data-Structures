#include "Menu.h"
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "Heap.h"
#include "HashTable.h";

using namespace std;

int main()
{
	HashTable h;

	if (h.is_vazia())
	{
		cout << "HT Vazia" << endl;
	}
	else
	{
		cout << "HT nao vazia" << endl;
	}

	h.inserir_Item(066, pessoa("066.394.664-65","Manoel Pedro Lucca Asuncao","Rua das violetas, Q28, L3") );
	h.inserir_Item(372, pessoa("372.250.328-01","Rebeca Linhares","Travessa Bicalho") );
	h.inserir_Item(230, pessoa("230.066.457-94","Sávio de Paula","Rua Antonio Mallorca") );
	h.inserir_Item(946, pessoa("946.115.482-23","Gessica Tavares Maia", "Av. Roberto Francisco Neto"));
	h.inserir_Item(156, pessoa("156.394.714-48","Kethleen Formigon","Rua Muniz Barreto") );
	h.inserir_Item(076, pessoa("076.826.685-92","Lucas Piazzi","Rua Santa Rita") );
	h.inserir_Item(074, pessoa("074.917.826-91","Jessica Pimentel Braga","Rua Dom Pedro") );
	h.inserir_Item(074, pessoa("148.329.339-28","Ana Beatriz Romão","Rua Bahia") );
	h.inserir_Item(074, pessoa("282.134.173-26","Fernanda Gaspar","Rua Amazonas") );
	h.inserir_Item(074, pessoa("529.225.583-74", "Luiza Qian", "Rua Sao Jorge"));
	h.inserir_Item(074, pessoa("438.315.534-92","Sergio Jimenez","Rua Tiradentes") );
	h.inserir_Item(074, pessoa("647.401.235-64","Camila Fernandes","Rua Santa Luzia") );
	h.inserir_Item(074, pessoa("656.591.197-94","Matheus Antunes","Rua Juiz de Fora") );
	h.inserir_Item(074, pessoa("965.682.194-06","Paula Fernandes","Rua Alto dos Passos") );
	h.inserir_Item(074, pessoa("074.771.096-35","Camila Lopes","Rua General Floriano") );
	h.inserir_Item(074, pessoa("983.861.098-17","Pedro Augusto","Rua General Rocca") );
	h.inserir_Item(074, pessoa("792.953.196-49","Camila Santos","Rua Santos Dummont") );
	h.inserir_Item(074, pessoa("001.044.197-39","Leandro Antunes","Rua das Margaridas") );


	h.imprime_Tabela();
	h.remover_Item(969);
	h.imprime_Tabela();

	if (h.is_vazia())
	{
		cout << "\nHT Vazia" << endl;
	}
	else
	{
		cout << "\nHT nao vazia" << endl;
	}
}