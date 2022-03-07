#include "main.h"
 
void employee_finder(std::vector<Dipendente> vector_file)
{
	CLS;
	std::string nmatricola;
	std::cout << "inserisci il numero di matricola" << std::endl;
	std::cin >> nmatricola;
	for(auto i : vector_file)
	{
		if(i.matricola==nmatricola)
		{
			std::cout << "\nMatricola:" << i.matricola << "\nCognome: " << i.cognome << "\nNome: " << i.nome << "\nSede: " << i.provincia << "\nSalario: " << i.salario << std::endl;
			break;
		}
	}
	

}