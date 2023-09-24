
#include <iostream>
#include "Gracz.h"
#include "funkcje.h"
#include <time.h>





using namespace std;

int zaczyna, nr_zag, nr_has, dl_h;
string has, zagadnienie, litera;

int main()
{
	setlocale(LC_ALL, "pl_PL"); 
	
	
	string imie;
	int kwota = 0;
	int wybor;
	cout << "\t\t\t\t\tWitaj w kole Fortuny\n\n\n";
	Gracz pierwszy(imie, kwota);
	Gracz drugi(imie, kwota);
	menu(wybor);
	Kolo k;
	
	
	
	while (wybor!=4)
	{


		switch (wybor)
		{
		case 1: 
			cout << "\nPodaj imie gracza pierwszego: "; cin>> imie;
			pierwszy.n_imie(imie);
			cout << "\nPodaj imie gracza drugiego: "; cin >> imie;
			drugi.n_imie(imie);
			pierwszy.wyswietl();
			drugi.wyswietl();

			
			menu(wybor); 
			break;
		case 2:
			zaczyna = rand() % 2 + 1;
			has = losowanie_zagad();
			zagadnienie = has;
			nr_has = nr_zag + 1;
			getline(plik, linia);
			dl_h = size(has);
			cout << "\n\n\t\t\t\tKategoria hasła: " << zagadnienie << "\n\n\n";
			cout << "\t\t\t    ";
			for (int i = 0; i < dl_h; i++)
			{

				if (has[i] == '-')cout << "  ";
				else cout << " _ ";


			}
			cout << endl;

			litera = has;



			for (int i = 0; i < dl_h; i++)
			{

				if (litera[i] == '-')litera[i] = ' ';
				else litera[i] = '_';

			}

			//cout << zaczyna; cin >> zaczyna;
			if (zaczyna == 1)
			{
				cout << "rozpoczyna "; pierwszy.wyswietl();
				
			}
			else if(zaczyna==2)
			{
				cout << "rozpoczyna "; drugi.wyswietl();

				menu(wybor);
			
			}

			break;


		case 3:



			break;
		}
		
		


	}




}

