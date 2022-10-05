#pragma once
#include <iostream>
#include <list>
#include <cstring>

using namespace std;


struct pessoa {;
	string cpf, nome, endereco;

public:
	pessoa(string input_cpf, string input_nome, string input_endereco) :cpf(input_cpf), nome(input_nome), endereco(input_endereco) {};
};

class HashTable
{
private:
	static const int hashGroups = 10;
	list<pair<int, pessoa>> Tabela[hashGroups]; 

public:
	bool is_vazia() const;
	int hash_Function(int key);
	void inserir_Item(int key, pessoa value);
	void remover_Item(int key);
	string busca_Tabela(int key);
	void imprime_Tabela();

};

