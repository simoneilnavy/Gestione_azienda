#include "main.h"
/*Esercizio dipendenti.
matricola|nome e cognome|provincia|salario;

visualizzare tutti i dipendenti,
visualizzare tabella dipendente,
mdificarne i parametri,
aumentare i salari di tutti i dipendenti di una provincia;*/
void stamp_menu()
{
	std::cout << "1) inserisci un dipendente nel database\n2)visualizza tutti i dipendenti\n3)visualizza la tabella di un dipendente" << std::endl;
}
int main(void)
{
	CLS;

	int sel = 0;
	stamp_menu();
	switch (sel)
	{
	case 1:
		crea_utente();
		break;
	case 2:
		show_all();
		break;
	case 3:
		employee_finder();
		break;
	}
}