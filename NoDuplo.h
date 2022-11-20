#pragma once
#include <memory>

using namespace std;
class NoDuplo
{
public:
	int valor;
	unique_ptr<NoDuplo> esq, dir;
	NoDuplo(int param_valor) : valor(param_valor), esq(nullptr), dir(nullptr) {};
	NoDuplo() : esq(nullptr), dir(nullptr) {};
};

