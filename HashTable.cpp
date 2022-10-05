#include "HashTable.h"

bool HashTable::is_vazia() const
{
	int soma{};
	for (int i{}; i < hashGroups; i++)
	{
		soma += Tabela[i].size();
	}
	if (!soma)
	{
		return true;
	}
	return false;
}

int HashTable::hash_Function(int key)
{
	return key % hashGroups;
}

void HashTable::inserir_Item(int key, pessoa value)
{
	int hashValue = hash_Function(key);
	auto& celula = Tabela[hashValue];
	auto bItr = begin(celula);
	bool key_existe = false;
	for (; bItr != end(celula); bItr++)
	{
		if (bItr->first == key)
		{
			key_existe = true;
			bItr->second = value;
			bItr = celula.erase(bItr);
			cout << "[ALERTA] Chave existe. Valor Atualizado." << endl;
			break;
		}

	}
	if (!key_existe) celula.emplace_back(key, value);
	
}

void HashTable::remover_Item(int key)
{
	int hashValue = hash_Function(key);
	auto& celula = Tabela[hashValue];
	auto bItr = begin(celula);
	bool key_existe = false;

	for (; bItr != end(celula); bItr++)
	{
		if (bItr->first == key)
		{
			key_existe = true;
			bItr = celula.erase(bItr);
			cout << "[INFO] Par Removido" << endl;
			break;
		}

	}
	if (!key_existe)
	{
		cout << "[ALERTA] Chave nao encontrada. Par nao removido." << endl;
	}
	return;
}

void HashTable::imprime_Tabela()
{
	for (int i{}; i < hashGroups; i++)
	{
		if (Tabela[i].size() == 0) continue;
		auto bItr = Tabela[i].begin();
		for (; bItr != Tabela[i].end(); bItr++)
		{
			cout << bItr;
		}
	}
	return;


}

