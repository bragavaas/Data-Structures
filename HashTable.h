#pragma once
#include <iostream>
#include <list>
#include <cstring>

using namespace std;

class HashTable
{
private:
	static const int hashGroups = 10;
	list<pair<int, string>> Tabela[hashGroups]; 

public:
	bool is_vazia() const;
	int hash_Function(int key);
	void inserir_Item(int key, string value);
	void remover_Item(int key);
	string busca_Tabela(int key);
	void imprime_Tabela();

};

