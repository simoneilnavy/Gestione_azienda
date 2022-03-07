#include "main.h"
std::vector<Dipendente> crea_utente(std::vector<Dipendente> vector_file)
{
	
	std::string matricola, nome, cognome, provincia;
	int salario;
	CLS;


	std::cout << "inserisci la matricola dell nuovo impiegato" << std::endl;
	std::cin >> matricola;
	//clearInput_afterINT();
	CLS;


	std::cout << "inserisci il nome dell nuovo impiegato" << std::endl;
	std::cin >> nome;
	//clearInput_afterINT();
	CLS;


	std::cout << "inserisci il cognome dell nuovo impiegato" << std::endl;
	std::cin >> cognome;
	//clearInput_afterINT();
	CLS;


	std::cout << "inserisci la provincia (della sede) dove si trova il nuovo impiegato" << std::endl;
	std::cin >> provincia;
	//clearInput_afterINT();
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
	std::fstream file(filename, std::ios::binary | std::ios::out);
	vector_file.push_back(emp1);
	vector_saver(file,vector_file);
	file.close();
	return vector_file;
}