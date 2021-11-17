#include <iostream>
using namespace std;
int main()
{
	const int* pierwsza_tablica[20];
	cout << "rozmiar tablicy typu int[20]: " << sizeof pierwsza_tablica;
	const float* druga_tablica[20];
	cout << "\nrozmiar tablicy typu float[20]: " << sizeof druga_tablica;
	const double* trzecia_tablica[20];
	cout << "\nrozmiar tablicy typu double[20]: " << sizeof trzecia_tablica;
	const int* czwarta_tablica[5][2];
	cout << "\nrozmiar tablicy typu int[5][4]: " << sizeof czwarta_tablica;
	cout << "\n***************************************************************";



	return 0;

}