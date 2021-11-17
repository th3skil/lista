#include <iostream>

using namespace std;

int main()
{
	int liczba = 43, a = 8, b = 10;

	cout.width(30);

	cout << "Szerokość tego pola to 30" << endl;

	//wyrównanie liczb do prawej strony 
	//(na całą liczbę przeznaczamy siedem miejsc)
	//puste miejsca będą wypełnione spacjami

	cout.width(7);
	cout << liczba << endl;
	cout.width(7);
	cout << a << endl;
	cout.width(7);
	cout << b << endl;

	return 0;