#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


//define "CLS" to clear command prompt
#if _WIN64 || _WIN32
#define PAUSA system("pause");
#define CLS system("cls");
#else
#define PAUSA system("echo premere un tasto per continuare; read dummy;") 
#define CLS system("clear");
#endif

static std::string filename = "anagrafe.dat";


class Dipendente
{
public:
	std::string matricola;
	std::string nome;
	std::string cognome;
	std::string provincia;
	int salario = 0;

	Dipendente()=default;

	Dipendente(std::string matricola, std::string nome, std::string cognome, std::string provincia, int salario)
	{
		this->matricola = matricola;
		this->nome = nome;
		this->cognome = cognome;
		this->provincia = provincia;
		this->salario = salario;
	}
};

static std::vector<Dipendente> file;

void crea_utente();
void show_all();
void employee_finder();
void cancella();
void clearInput_afterINT();