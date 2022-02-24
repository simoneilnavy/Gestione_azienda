#include "main.h"
void show_all()
{
	CLS;
	std::fstream database(filename, std::ios::binary | std::ios::in);
	if (database) 
	{
		database.read((char*)&file, sizeof(file));
		for (auto i : file)
		{
			std::cout << i.matricola << i.nome << i.cognome << i.provincia << i.salario << std::endl;
		}
		PAUSA;
	}
	database.close();
}