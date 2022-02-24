#include "main.h"
void cancella()
{
	CLS;
	char selezione;
	std::cout << "sei sicuro di voler cancellare?" << std::endl;
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
			//PAUSA;
			return;
		case 'n':
			std::cout << "Il file non \x8a stato rimosso" << std::endl;
			//PAUSA;
			return;
		default:
			std::cout << "inserisci un valore corretto" << std::endl;
			PAUSA;
			break;
		}
	}
}

void clearInput_afterINT()
{
	std::cin.ignore(80, '\n');
	std::cin.clear();

}