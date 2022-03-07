#include "main.h"

std::vector<Dipendente> add_stipendio(std::vector<Dipendente> vector_file)
{
	CLS;
	std::string sede;
	int aumento=0;
	clearInput_afterINT();
	std::cout << "inserisci la sede" << std::endl;
	getline(std::cin, sede);
	std::cout << "inserisci inserisci il valore dell'aumento" << std::endl;
	std::cin >> aumento;
	clearInput_afterINT();
	for (auto i =0;i< vector_file.size();i++)
	{
		if (vector_file[i].provincia == sede)
		{
			vector_file[i].salario += aumento;
			
		}
	}
	std::fstream file(filename, std::ios::binary | std::ios::out);
	vector_saver(file,vector_file);
	file.close();
	CLS;
	std::cout << "aumento avvenuto con successo"<<std::endl;
	return vector_file;
}