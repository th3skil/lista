#include <iostream>
#include"Nag³ówek.h"
using namespace std;
void ile_moge_kupic(double zlotowki)
{
	double ileEuro;
	double ileDolarow;
	double ileKoron;
	ileEuro = zlotowki / euro;
	ileKoron = zlotowki / koronaNorweska;
	ileDolarow = zlotowki / dolar;
	cout << "za kwote " << zlotowki << " mozna kupic : \n";
	cout << "********************************************\n";
	cout << ileEuro << " euro" << endl;
	cout << ileDolarow << " dolarow" << endl;
	cout << ileKoron << "koron N." << endl;
	cout << "********************************************\n";
}