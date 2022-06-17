#include "main.h"

void employee_finder()
{
	CLS;
	int index=0;
	std::string matricola;
	std::ifstream employee("anagrafe.dat", std::ios::binary);
	std::vector<Dipendente> database;
	Dipendente mask();
	std::cout << "inserisci la matricola dell'impiegato che desideri ricercare" << std::endl;
	/*while (true)
	{
		employee.read((char*)&mask, sizeof(mask));
		database.push_back(mask());
	}
	std::cin >> matricola;*/
}