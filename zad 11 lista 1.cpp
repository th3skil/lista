#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e, f, x, y;
	cout << "mamy układ równan"<< endl; 
	cout << "ax + by = c" << endl;
	cout << "dx + ey = f" << endl;
	cout << "podaj po kolei stałe a,b,c,d,e,f i sprawdz czy istnieje rozwiazanie ukladu (y,x)";
	cout << "podaj a: ";
		cin >> a;
		cout << "podaj b: ";
		cin >> b;
		cout << "podaj c: ";
		cin >> c;
		cout << "podaj d: ";
		cin >> d;
		cout << "podaj e: ";
		cin >> e;
		cout << "podaj f: ";
		cin >> f;
		cout << "towj uklad wyglada nastepujaco" << endl;
		cout << a << "x +" << b << "y" << "=" << c << endl;
		cout << d << "x +" << e << "y" << "=" << f << endl;

		double wx,wy,w;
		w = (a * e) - (d * b);
		wx = (c * e) - (f * b);
		wy = (a * f) - (d * c);

		if (w != 0)
		{
			
				cout << "x = " << wx / w << endl;
				cout << "y = " << wy / w << endl;
		}
		else {
			if (wx == 0 && wy == 0)
			{
				cout << "Uklad ma nieskonczenie wiele rozwiazan" << endl;
			}

			else
			{
				cout << "Uklad sprzeczny" << endl;
			}

		}
		system("pasue");
}

