#include <iostream>
using namespace std;
int main()
{
	double liczby[10];
	for (int i = 0;i < 10;i++)
	{
		cout << " podaj liczbe z przecinkiem lub bez jak wolisz!: ";
		cin >> liczby[i];

	}



	long double max = 0;
	for (int i = 0;i < 10;i++)
	{

		if (liczby[i] > max)
		{
			max = liczby[i];
		}
	}
	cout << "najwieksza liczba jest: " << max;

	long double min = 100000000000000;
		for (int i = 0;i < 10; i++)
		{
			if (liczby[i] < min)
			{
				min = liczby[i];
			}
			
		}
		cout << "najwieksza liczba jest: " << max;
		cout << "\nnajmniejsza liczba jest: " << min;
		

		return 0;
}

