#include <iostream>
using namespace std;
int main()

{
	bool znaczek =1;
	while(znaczek)
	{
		double a, b;
		char znak;
		cout << "podaj liczbe a: ";
		cin >> a;
		cout << " podaj typ działąnia (+,-,/,*): ";
		cin >> znak;
		cout << "podaj liczbe b: ";
		cin >> b;
		if (znak == 43)
		{
			cout << "a + b= " << a + b << endl;
		}

		else if (znak == 45)
		{
			cout << "a - b= " << a - b << endl;
		}
		else if ((znak == 47) && (b != 0))
		{
			cout << "a / b= " << a / b << endl;
		}
		else if ((znak == 47) && (b == 0))
		{
			cout << " nie dzielimy przez zero :(" << endl;
		}
		else if (znak == 42)
		{
			cout << "a * b= " << a * b << endl;
		}
		
		
		cout << "czy chesz jeszcze raz oblyczyc wpisz 1-tak/0-nie ";
		cin >> znaczek;
		system("cls");
	}
	

	system("pause");
}