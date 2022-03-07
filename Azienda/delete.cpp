#include "main.h"
std::vector<Dipendente> cancella(std::vector<Dipendente> vector_file)
{
	CLS;
	char selezione;
	std::cout << "sei sicuro di voler cancellare? y o n" << std::endl;
	while (true)
	{
		std::cin >> selezione;
		clearInput_afterINT();
		switch (selezione)
		{
		case 'y':
			CLS;
			remove(filename.c_str());
			std::cout << "file rimosso con successo" << std::endl;
			vector_file.clear();
			return vector_file;
		case 'n':
			std::cout << "Il file non \x8a stato rimosso" << std::endl;
			return vector_file;
		default:
			std::cout << "inserisci un valore corretto" << std::endl;
			break;
		}
	}
	return vector_file;
}

void clearInput_afterINT()
{
	std::cin.ignore(80, '\n');
	std::cin.clear();

}