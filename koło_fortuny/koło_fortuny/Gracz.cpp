#include "Gracz.h"


Gracz::Gracz(string imie, int kwota)
{
	this->imie = imie;
	this->kwota = kwota;

}
void Gracz::wyswietl()
{
	cout << endl;
	cout <<"\t\t"<< this->imie; 
	cout << "\t\t\tkwota: " << this->kwota;

}
void Gracz::n_imie(string &nimie)
{
	this->imie = nimie;


}


Kolo::Kolo()
{
	int* tab = new int[] { 100, 150, 0, 100, 1500, 300, 200, 250, 400, 100, 150, 200, 2500, 300 };
	this->tab = tab;
	

}

int Kolo::losuj(Kolo k)
{
	int wylosowana;
	srand(time(NULL));
	wylosowana = rand() % 14 + 1;
	cout << tab[wylosowana];
	return tab[wylosowana];
	
}