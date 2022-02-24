#include "main.h"
/*Esercizio dipendenti.
matricola|nome e cognome|provincia|salario;

visualizzare tutti i dipendenti,
visualizzare tabella dipendente,
mdificarne i parametri,
aumentare i salari di tutti i dipendenti di una provincia;*/
void stamp_menu()
{
	std::cout << "1)inserisci un dipendente nel database\n" <<
				"2)visualizza tutti i dipendenti\n"<<
				"3)visualizza la tabella di un dipendente\n"<<
				"4)elimina il Database\n"<<
				"5)esci" << std::endl;
}
int main(void)
{
	CLS;
	while (true)
	{
		char sel = 0;
		stamp_menu();
		std::cin >> sel;
		clearInput_afterINT();

		switch (sel)
		{
		case '1':
			crea_utente();
			break;
		case '2':
			show_all();
			break;
		case '3':
			employee_finder();
			break;
		case '4':
			cancella();
			break;
		case '5':
			return 0;
		default:
			std::cout << "inserisci un valore valido" << "\n";
			break;
		}
		PAUSA;
		CLS;
	}
}