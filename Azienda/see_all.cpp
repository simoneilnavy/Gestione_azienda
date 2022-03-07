#include "main.h"
void show_all(std::vector<Dipendente> vector_file)
{
	CLS;
	for (auto i : vector_file) 
	{
		std::cout << "numero di matricola:"
			<< i.matricola << '\n'
			<< "cognome:"
			<< i.cognome << '\n'
			<< "nome:"
			<< i.nome << '\n'
			<< "provincia sede:"
			<< i.provincia << '\n'
			<< "salario:"
			<< i.salario << "\n\n";
	}
}