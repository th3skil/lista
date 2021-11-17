#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int zliczLiteryA(char tekst[], int ROZMIAR) {
    int liczbaLiterA = 0;
    for (int i = 0; i < ROZMIAR; i++) {
        if (tekst[i] == 0) {
            break;
        }

        if (tekst[i] == 'a' || tekst[i] == 'A') {
            liczbaLiterA++;
        }
    }

    return liczbaLiterA;
}




int main() {
    const int ROZMIAR = 1024;
    char tekst[ROZMIAR];
    cout << "wprowadź tekst: ";
    cin.getline(tekst,1024);

    int liczbaLiterA = zliczLiteryA(tekst, ROZMIAR);
    cout << "liczba wystąpień litery \"a\" lub \"A\": " << liczbaLiterA << endl;
    return 0;
}