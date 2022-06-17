#include "main.h"
void crea_utente()
{
	
	std::string matricola, nome, cognome, provincia;
	int salario;
	CLS;


	std::cout << "inserisci la matricola dell nuovo impiegato" << std::endl;
	std::cin >> matricola;
	CLS;


	std::cout << "inserisci il nome dell nuovo impiegato" << std::endl;
	std::cin >> nome;
	CLS;


	std::cout << "inserisci il cognome dell nuovo impiegato" << std::endl;
	std::cin >> cognome;
	CLS;


	std::cout << "inserisci la provincia (della sede) dove si trova il nuovo impiegato" << endl;
	std::cin >> provincia;
	CLS;


	std::cout << "inserisci il salario del nuovo impiegato" << std::endl;
	std::cin >> salario;
		CLS;
		while (std::cin.good())
		{
			std::cout << "inserisci un salario formattato correttamente" << std::endl;
			std::cin >> salario;
				CLS;
		}
		Dipendente emp1(matricola,nome,cognome,provincia,salario);
		std::ofstream creautente("anagrafe.dat", std::ios::binary | std::ios::app);
		creautente.write((char*)&emp1, sizeof(emp1));
		creautente.close();
}