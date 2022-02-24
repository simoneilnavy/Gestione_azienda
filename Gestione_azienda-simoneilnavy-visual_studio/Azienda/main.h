#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


//define "CLS" to clear command prompt
#if _WIN64 || _WIN32
#define CLS system("cls");
#else
#deifne CLS system("clear");
#endif


class Dipendente
{
public:
	std::string matricola;
	std::string nome;
	std::string cognome;
	std::string provincia;
	int salario = 0;

	Dipendente() { }

	Dipendente(std::string matricola, std::string nome, std::string congnome, std::string provincia, int salario)
	{
		this->matricola = matricola;
		this->nome = nome;
		this->cognome = cognome;
		this->provincia = provincia;
		this->salario = salario;
	}
};
void crea_utente();
void show_all();
void employee_finder();