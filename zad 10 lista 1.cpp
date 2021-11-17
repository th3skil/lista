
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << " wzor funkcji kwadratowej (ax^2+bx+c) dla przzypomnienia" << endl;
	cout << "podaj wpołcznynnik a: ";
	cin >> a;
	cout << endl;
	cout << "podaj wpołcznynnik b: ";
	cin >> b;
	cout << endl;
	cout << "podaj wpołcznynnik c: ";
	cin >> c;
	cout << endl;
	cout << "********************************************" << endl;
	if ((a > 0) && (a != 1))
	{
		if ((b > 0) && (b != 1))
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "+" << b << "x" << c;
			}


		}
		else if ((b < 0) && (b != -1))
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << b << "x" << c;
			}
		}
		else if (b == 1)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+ x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "+ x"  << c;
			}
		}
		else if (b == -1)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "-x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "-x"  << c;
			}

		}
		else if (b == 0)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2"  << c;
			}

		}

	}
	else if ((a < 0) && (a != -1))
	{
		if ((b > 0) && (b != 1))
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "+" << b << "x"  << c;
			}


		}
		else if ((b < 0) && (b != -1))
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << b << "x"  << c;
			}
		}
		else if (b == 1)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+ x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "+ x"  << c;
			}
		}
		else if (b == -1)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "-x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2" << "-x"  << c;
			}

		}
		else if (b == 0)
		{
			if (c > 0)
			{
				cout << "y=" << a << "x^2" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << a << "x^2"  << c;
			}

		}





	}
	else if(a==0)
	if ((b > 0) && (b != 1))
	{
		if (c > 0)
		{
			cout << "y=" << "+" << b << "x" << "+" << +c;
		}
		else if (c < 0)
		{
			cout << "y=" << "+" << b << "x" << c;
		}


	}
	else if ((b < 0) && (b != -1))
	{
		if (c > 0)
		{
			cout << "y="  << b << "x" << "+" << +c;
		}
		else if (c < 0)
		{
			cout << "y="   << b << "x"  << c;
		}
	}
	else if (b == 1)
	{
		if (c > 0)
		{
			cout << "y=" << "x" << "+" << +c;
		}
		else if (c < 0)
		{
			cout << "y="<< "x" << c;
		}
	}
	else if (b == -1)
	{
		if (c > 0)
		{
			cout << "y="  << "-x" << "+" << +c;
		}
		else if (c < 0)
		{
			cout << "y="   << "-x"  << c;
		}

	}
	else if (b == 0)
	{
		if (c > 0)
		{
			cout << "y="   << c;
		}
		else if (c < 0)
		{
			cout << "y=" << c;
		}

	}
	else if (a == 1)
		if ((b > 0) && (b != 1))
		{
			if (c > 0)
			{
				cout << "y=" << "x^2" << "+" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << "x^2" << "+" << b << "x"  << c;
			}


		}
		else if ((b < 0) && (b != -1))
		{
			if (c > 0)
			{
				cout << "y=" << "x^2" << b << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << "x^2" << b << "x"  << c;
			}
		}
		else if (b == 1)
		{
			if (c > 0)
			{
				cout << "y=" << "x^2" << "x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << "x^2" << "x" << c;
			}
		}
		else if (b == -1)
		{
			if (c > 0)
			{
				cout << "y=" << "x^2" << "-x" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << "x^2" << "-x"  << c;
			}

		}
		else if (b == 0)
		{
			if (c > 0)
			{
				cout << "y=" << "x^2" << "+" << +c;
			}
			else if (c < 0)
			{
				cout << "y=" << "x^2" << c;
			}

		}
		else if (a == -1)
			if ((b > 0) && (b != 1))
			{
				if (c > 0)
				{
					cout << "y=" << "-x^2" << "+" << b << "x" << "+" << +c;
				}
				else if (c < 0)
				{
					cout << "y=" << "-x^2" << "+" << b << "x" << c;
				}


			}
			else if ((b < 0) && (b != -1))
			{
				if (c > 0)
				{
					cout << "y=" << "-x^2" << b << "x" << "+" << +c;
				}
				else if (c < 0)
				{
					cout << "y=" << "-x^2" << b << "x"  << c;
				}
			}
			else if (b == 1)
			{
				if (c > 0)
				{
					cout << "y=" << "-x^2" << "x" << "+" << +c;
				}
				else if (c < 0)
				{
					cout << "y=" << "-x^2" << "x" << c;
				}
			}
			else if (b == -1)
			{
				if (c > 0)
				{
					cout << "y=" << "-x^2" << "-x" << "+" << +c;
				}
				else if (c < 0)
				{
					cout << "y=" << "-x^2" << "-x"  << c;
				}

			}
			else if (b == 0)
			{
				if (c > 0)
				{
					cout << "y=" << "-x^2" << "+" << +c;
				}
				else if (c < 0)
				{
					cout << "y=" << "-x^2" << c;
				}

			}
			cout << endl;
			cout << "********************************************" << endl;
			double delta;
			delta = (b * b) - (4 * a * c);
			double x1, x2;
			if (delta > 0)
			{
				x1 = (-b - sqrt(delta)) / (2 * a);
				x2 = (-b + sqrt(delta)) / (2 * a);
				cout << "x1= " << x1 << endl;
				cout << "x2= " << x2 << endl;
			}
			else if (delta == 0)
			{
				x1 = (-b) / (2 * a);
				cout << "x1= " << x1;
			}
			else if (delta < 0)
			{
				cout << "delta ujemna, brak miejsc zerowych";
			}


}