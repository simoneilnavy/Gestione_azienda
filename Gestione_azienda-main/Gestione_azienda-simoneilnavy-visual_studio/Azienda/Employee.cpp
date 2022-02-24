#include "main.h"

void employee_finder()
{
	CLS;
	std::vector<Dipendente>::iterator index;
	std::ifstream employee_seek(filename, std::ios::binary);

	std::string nmatricola;
	std::cout << "inserisci il valore della matricola" << std::endl;
	std::cin >> nmatricola;

	employee_seek.read((char*)&file, sizeof(std::vector<Dipendente>)); //lettura del vettore
	//employee.matricola = nmatricola;

	//std::find(file.begin()->matricola, file.end()->matricola, nmatricola); //trovare numero matricola | operatore deferenziale ->| 
	CLS;
	std::cout << index[0].matricola << index[0].cognome << index[0].nome << index[0].provincia << index[0].salario;
	employee_seek.close();
}