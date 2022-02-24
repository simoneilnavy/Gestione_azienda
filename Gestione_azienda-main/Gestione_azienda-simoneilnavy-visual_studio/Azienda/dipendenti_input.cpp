#include "main.h"
void crea_utente()
{
	
	std::string matricola, nome, cognome, provincia;
	int salario;
	CLS;


	std::cout << "inserisci la matricola dell nuovo impiegato" << std::endl;
	std::cin >> matricola;
	clearInput_afterINT();
	CLS;


	std::cout << "inserisci il nome dell nuovo impiegato" << std::endl;
	std::cin >> nome;
	clearInput_afterINT();
	CLS;


	std::cout << "inserisci il cognome dell nuovo impiegato" << std::endl;
	std::cin >> cognome;
	clearInput_afterINT();
	CLS;


	std::cout << "inserisci la provincia (della sede) dove si trova il nuovo impiegato" << std::endl;
	std::cin >> provincia;
	clearInput_afterINT();
	CLS;


	std::cout << "inserisci il salario del nuovo impiegato" << std::endl;
	std::cin >> salario;
	clearInput_afterINT();

	CLS;
	while (!std::cin.good())
	{
		std::cout << "inserisci un salario formattato correttamente" << std::endl;
		std::cin >> salario;
		CLS;
	}

	
	Dipendente emp1(matricola, nome, cognome, provincia, salario);
	std::fstream creautente,leggi;
	leggi.open(filename, std::ios::binary | std::ios::in);
	if (leggi)
	{
		leggi.read((char*)&file, sizeof(file));
	}
	leggi.close();

	creautente.open(filename, std::ios::out | std::ios::binary);
	if (creautente)
	{
		file.push_back(emp1);
		creautente.write((char*)&file, sizeof(file));
	}
	creautente.close();
}