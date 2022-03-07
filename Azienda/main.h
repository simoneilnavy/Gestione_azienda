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
//std::vector<Dipendente> vector_file;

std::vector<Dipendente> crea_utente(std::vector<Dipendente> vector_file);
void show_all(std::vector<Dipendente> vector_file);
void employee_finder(std::vector<Dipendente> vector_file);
std::vector<Dipendente> add_stipendio(std::vector<Dipendente> vector_file);
std::vector<Dipendente> cancella(std::vector<Dipendente> vector_file);
void clearInput_afterINT();
void strwrite(std::fstream& file, std::string input);
std::string stread(std::fstream& file);
void vector_saver(std::fstream& file, std::vector<Dipendente> vector_file);
std::vector<Dipendente> vector_reader(std::fstream& file, std::vector<Dipendente> vector_file);