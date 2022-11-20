#pragma once
#include <memory>

using namespace std;
class NoBT
{
public:
	int valor;
	NoBT *filho_esq, *filho_dir, *pai;
	NoBT(int param_valor) : valor(param_valor), filho_esq(nullptr), filho_dir(nullptr), pai(nullptr) {};
	NoBT() : filho_esq(nullptr), filho_dir(nullptr), pai(nullptr) {};
};