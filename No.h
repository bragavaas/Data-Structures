#pragma once
#include <memory>

using namespace std;
class No
{
public:
	int valor;
	unique_ptr<No> proximo;
	No(int param_valor) : valor(param_valor), proximo(nullptr) {};
	No() : proximo(nullptr){};
};

