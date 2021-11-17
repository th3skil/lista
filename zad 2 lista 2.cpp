#include <iostream>

using namespace std;

void odwroc(char tekst[], int rozmiar) {
    int słowo;

    for (int i = 0; i <= rozmiar; i++) {
        if (tekst[i] == 0) {
                słowo = i;
            break;
        }
    }

    for (int i = słowo - 1; tekst[i] != 0; i--) {
        cout << tekst[i];
    }

    cout << endl;
}

int main() {
    const int ROZMIAR = 1024;
    char tekst[ROZMIAR];
    cout << "wprowadź tekst: ";
    cin.getline(tekst, ROZMIAR);
    odwroc(tekst, ROZMIAR);
}
