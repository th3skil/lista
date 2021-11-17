#include <iostream>
using namespace std;
int main()
{
	double x1, y1,x2,y2;
	cout << "podaj pierwsza wspolrzedna pierwszego punktu(x)";
	cin >> x1;
	cout << endl;
	cout <<"podaj druga wspolrzedna (y):";
	cin >> y1;
	cout << endl;
	cout << "podaj pierwsza wspolrzedna drugiego punktu  (x):";
	cin >> x2;
	cout << endl;
	cout << "podaj druga wspolrzedna (y):";
	cin >> y2;
	cout << endl;
	double a, b;
	a = (y1 - y2) / (x1 - x2);
	b = y1 - ((y1 - y2) / (x1 - x2)) * x1;
	if (x1 == x2)
	{
		cout << "x=" << x1;

	}
	else if (y1 = y2)
	{
		cout << "y=" << y1;
	}
	if (a > 0)
	{
		
		if (b > 0)
		{
			cout << "y= " << a << "x" << " +" << b << endl;
		}
		else if (b < 0)
		{
			cout << "y= " << a << "x" << " " << b << endl;
		}
		else if (b==0)
		{
			cout << "y= " << a<<"x" << endl;
		}
	}
	else if (a < 0)
	{
		if (b > 0)
		{
			cout << "y= " << a << "x" << " +" << b << endl;
		}
		else if (b < 0)
		{
			cout << "y= " << a << "x" << " " << b << endl;
		}
		else if (b==0)
		{
			cout << "y= " << a << "x" << endl;
		}

	}
	else if(a==0)
	{
		if (b > 0)
		{
			cout << "y= " << "+" << b << endl;
		}
		else if (b < 0)
		{
			cout << "y= " << " " << b << endl;
		}
		else if(b==0)
		{
			cout << "y="<<"0" << endl;
		}
	}
	
	

	system("pause");


}