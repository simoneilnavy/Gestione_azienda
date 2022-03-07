#include "main.h"
/*Esercizio dipendenti.
matricola|nome e cognome|provincia|salario;

visualizzare tutti i dipendenti,
visualizzare tabella dipendente,
mdificarne i parametri,
aumentare i salari di tutti i dipendenti di una provincia;*/
void stamp_menu()
{
	std::cout <<"1)inserisci un dipendente nel database\n" <<
				"2)visualizza tutti i dipendenti\n"<<
				"3)visualizza la tabella di un dipendente\n"<<
				"4)elimina il Database\n"<<
				"5)aumenta lo stipendio di tutti i dipendenti di una sede\n" <<
				"6)esci" <<
				std::endl;
}
int main(void)
{
	std::vector<Dipendente> vector_file;
	CLS;
	std::fstream file(filename, std::ios::binary | std::ios::in);
	vector_file=vector_reader(file,vector_file);
	file.close();
	while (true)
	{
		
		char sel = 0;
		stamp_menu();
		std::cin >> sel;
		//clearInput_afterINT();

		switch (sel)
		{
		case '1':
			vector_file=crea_utente(vector_file);
			break;
		case '2':
			show_all(vector_file);
			break;
		case '3':
			employee_finder(vector_file);
			break;
		case '4':
			vector_file=cancella(vector_file);
			break;
		case '5':
			vector_file=add_stipendio(vector_file);
			break;
		case '6':
			return 0;
		default:
			std::cout << "inserisci un valore valido" << "\n";
			break;
		}
		PAUSA;
		CLS;
	}
}