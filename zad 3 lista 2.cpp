#include<iostream>
using namespace std;
void duze(char napis[]);
int main()
{

	char tekst[1024];
	cout << "podaj słowo: ";
	cin >> tekst;
	cout << "Napis przed modyfikacja: " << tekst << endl;
	duze(tekst);
	cout << "Napis po zmianie na duze litery: \n" << tekst << endl;
	return 0;
}
void duze(char napis[])
{
	unsigned int kolejna_literka = 0;
	char znak;
	char roznica = 'A' - 'a';
	while (znak = napis[kolejna_literka])
	{
		if ((znak >= 'a') && (znak <= 'z'))
			napis[kolejna_literka]+= roznica;
		kolejna_literka++;
		
	}
}