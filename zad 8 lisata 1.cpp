
#include <iostream>
using namespace std;
int main()
{
	int liczba, wielokrotnosc;
 cout << "podaj liczbe:  ";
 cin >> liczba;
 cout << "podaj wielokrotnosc:  ";
 cin >> wielokrotnosc;

 for (int i = 1;i <= liczba;i++)
 {
	 for (int j = 1;j <= wielokrotnosc;j++)
	 {
		 if (j * i < 10 )
		 {
			 cout << j * i << "  ";
		 }
		 else {
			 cout << i * j << " ";
			}
	 }
	 cout << endl;
 }

 system("pause");
}

