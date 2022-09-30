#include "datamgt.hpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <regex>

using namespace std::this_thread;
using namespace std::chrono;
using namespace std;

bool regex_validation(string s, int bits)
{
	regex exp("([0-1]{"+to_string(bits)+ "})");
	return regex_match(s, exp);
}
int input_data(string input_name, int bits)
{
	string s;
	bool input_valid = 0;
	cout << "************************" << endl;
	cout << "Input de dados para " << input_name;
	while (!input_valid)
	{
		cout << "\nEntre com o input de " << bits << "  bits desejado (em binario): ";
		getline(cin, s);
		input_valid = regex_validation(s, bits);
	}
	return convert_to_number(s);
}
int convert_to_number(string s)
{
	int n;
	try {
		n = stoi(s, 0, 2);
	}
	catch (exception e)
	{
		cout << "Conversao para decimal invalida. tente novamente!" << endl;
	}
	return n;
}