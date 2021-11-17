#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cout <<"podaj 1 liczbe: ";
    cin >> a;
    cout << "podaj 2 liczbe:  ";
    cin >> b;
    cout << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    double c=(a+b)/2;
    cout << "srednia z" << a << " i " << b << " to " << c << endl;
   
    system("pause");


}

