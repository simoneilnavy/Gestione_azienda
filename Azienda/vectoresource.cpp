#include "main.h"

void vector_saver(std::fstream& file, std::vector<Dipendente> vector_file)
{
	size_t veclen = 0;
	veclen = vector_file.size();
	file.write((char*)&veclen, sizeof(size_t));
	for(auto i : vector_file)
	{
		strwrite(file,i.matricola);
		strwrite(file, i.nome);
		strwrite(file, i.cognome);
		strwrite(file, i.provincia);
		file.write((char*)&i.salario, sizeof(int));
	}
}

std::vector<Dipendente> vector_reader(std::fstream& file, std::vector<Dipendente> vector_file)
{
	size_t len = 0;
	file.read((char*)&len, sizeof(size_t));
	vector_file.resize(len);
	for (auto i = 0; i < len; i++ )
	{
		vector_file[i].matricola = stread(file);
		vector_file[i].nome = stread(file);
		vector_file[i].cognome = stread(file);
		vector_file[i].provincia = stread(file);
		file.read((char*)&vector_file[i].salario, sizeof(int));
	}
	return vector_file;
}