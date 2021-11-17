#include <math.h>
#include <iostream>

using namespace std;

int sumaCyfr(int max) {
    int suma = 0;
    while (max != 0) {
        int liczba = max % 10;
        max = max / 10;
        suma += liczba;
    }

    return suma;
}

int main() {
    int liczba = 0;
    cout << "podaj liczbę: ";
    cin >> liczba;
    int suma = sumaCyfr(liczba);

    cout << "suma cyfr: " << suma << endl;
}