#include "funkcja.h"
#include <iostream>
using namespace std;

int main()
{
 
        int a, b = 0;
        cout << "podaj liczbę a: ";
        cin >> a;
        cout << "podaj liczbę b: ";
        cin >> b;
        int nwd = obliczNWD(a, b);

        cout << "nwd(" << a << " " << b << "):" << nwd << endl;

}