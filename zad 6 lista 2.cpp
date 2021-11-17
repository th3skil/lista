#include <iostream>

using namespace std;

void wypiszBinarnie(int n) 
{
    const int ROZMIAR = 32;
    bool bity[ROZMIAR]{};

    int licznik = 1;
    while (n != 0) {
        bool bit = n % 2;
        n = n / 2;
        bity[ROZMIAR - licznik] = bit;
        licznik++;
    }

    for (int i = 0; i < ROZMIAR; i++) {
        if (i % 8 == 0 && i != 0) {
            cout << " ";
        }

        cout << bity[i];
    }

    cout << endl;
}

int main() {
    int n;
    cout << "podaj liczbę: ";
    cin >> n;
    wypiszBinarnie(n);
}