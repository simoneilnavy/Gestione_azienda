#include "main.h"

void employee_finder()
{
	CLS;
	std::vector<Dipendente>::iterator index;
	std::ifstream show_user("anagrafe.dat", std::ios::binary);
	Dipendente employee();
	std::vector<Dipendente> test;
	std::string nmatricola;
	std::cout << "inserisci il valore della matricola" << std::endl;
	std::cin >> nmatricola;
	while (true)
	{
		show_user.read((char*)&employee, sizeof(Dipendente));
		test.push_back(employee);
	}
	employee.matricola = nmatricola;
	std::find(test.begin()->matricola, test.end()->matricola, employee->matricola);
	CLS;
	//std::cout << index[0].matricola << index[0].cognome << index[0].nome << index[0].provincia << index[0].salario;
}