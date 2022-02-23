#include "main.h"
/*Esercizio dipendenti.
matricola|nome e cognome|provincia|salario;

visualizzare tutti i dipendenti,
visualizzare tabella dipendente,
mdificarne i parametri,
aumentare i salari di tutti i dipendenti di una provincia;*/
int main(void)
{
	Dipendente p,c;
	fstream binary("anagrafe.dat", ios::binary);
	binary.write((char*)&p, sizeof(p));
	binary.close();
	ifstream lettura("file.dat", ios::binary);
	binary.read((char*)&c, sizeof(c));
	cout << c.ciccio << c.test;

}