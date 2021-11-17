#include <iostream>
#include <math.h>
using namespace std;
int potega(int podstawa, int wykladnik = 2);
double potega(double podstawa, int wykladnik = 2);
void potega(int& wynik, int podstawa, int wykladnik);
int main()
{
	double podstawa, wykladnik = 0;
	cout << "podaj podstawe potegi: ";
	cin >> podstawa;
	cout << " podaj wykladnik: ";
	cin >> wykladnik;
	cout << "\n ************************************************* \n";

	cout << "potega typu int: " << potega(podstawa, wykladnik) << endl;
	cout <<"potega typu double:  " << potega(podstawa, wykladnik) << endl;

	int wynik;
	potega(wynik, podstawa, wykladnik);
	cout << "wynik  pobrany przez wskaznik: " << wynik << endl;
		return 0;
}
int potega(int podstawa, int wykladnik)
{
	return pow(podstawa, wykladnik);
}
void potega(int& wynik, int podstawa, int wykladnik) {
	wynik = pow(podstawa, wykladnik);
}
double potega(double podstawa, int wykladnik) {
	return pow(podstawa, wykladnik);
}