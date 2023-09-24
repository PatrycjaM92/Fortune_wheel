#pragma once
#include<iostream>
using namespace std;
class Gracz
{
	string imie;
	int kwota;
public:
	Gracz(string imie, int kwota);
	void wyswietl();
	void n_imie(string &nimie);

};

class Kolo
{

	int *tab;
	
public:
	Kolo();
	

	int losuj(Kolo);
	//int wyswietl;


};