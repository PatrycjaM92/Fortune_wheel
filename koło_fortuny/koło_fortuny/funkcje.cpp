#include "funkcje.h"

int menu(int &wybor)
{
	cout << "\n-------------------------------------------------------------------------------------\n";
	cout << "1. Nowa Gra\n";
	cout << "2. Rozpocznij\n";
	cout << "3. Sprawdz saldo\n";
	cout << "4. Zakoncz\n";
	cout << "\n Co wybierasz: "; cin >> wybor;
	return wybor;
		

}
//losowanie zagadnienia
string losowanie_zagad()
{
	fstream plik;

	int nr_zag, nr_has;
	string zagadnienie, has, litera;
	
	plik.open("haslo.txt", ios::in);
	string linia;
	if (plik.good() == false) cout << "blad otwarcia pliku";

	do
	{
		nr_zag = rand() % 20 + 1;
	} while (nr_zag % 2 == 0);
	for (int i = 1; i < nr_zag; i++)
	{
		getline(plik, linia);
	}
	getline(plik, linia);
	
	

	plik.close();

	

	return linia;


}