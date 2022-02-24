#include "main.h"
void show_all()
{
	CLS;
	std::ifstream show_user("anagrafe.dat", std::ios::binary);
	Dipendente *impiegato = new Dipendente;
	while(true)
	{
		show_user.read((char*)&impiegato, sizeof(*impiegato));
		std::cout << impiegato;
	}
	show_user.close();
}