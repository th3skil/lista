#include <iostream>
using namespace std;
int main()
{
	double a, b, c, x1, x2, x;
	cout << "podaj wspolrzedna a:";
	cin >> a;
	cout<< "podaj wspolrzedna b:";
	cin >> b;
	cout<< "podaj wspolrzedna c:";
	cin >> c;
	cout << "*************************************" << endl;
	cout << "podaj x0: ";
	cin >> x;
	cout << "*************************************" << endl;
	cout << "f(" << x << ") =" << a << "x^2 " << "+" << b << "x" << "+" << c << endl;

	cout << "*************************************" << endl;
	cout << "f(" << x << ")" << "=" << (a * x * x) + (b * x) + c << endl;






	system("pause");



}
