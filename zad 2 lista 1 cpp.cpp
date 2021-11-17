#include <iostream>
using namespace std;

int main()
{
	int liczba;
	cout << "podaj ilosc gwiazdek";
	cin >> liczba;
	for (int i = liczba;i >0;i--) 
	{

		for (int j = 0;j < i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
		
	system("pause");

}