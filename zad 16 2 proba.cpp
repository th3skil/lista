#include <iostream>
using namespace std;
bool czyPierwsza(int n)
{

    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
        return true;
    }


}
int main()
{
    int liczba;
    cout << "podaj liczbe";
    cin >> liczba;
    bool wynik = czyPierwsza(liczba);
    cout << " liczba pierwsza?  " << boolalpha << wynik << endl;



    cout << "liczby pierwsze < 100:" << endl;
    for (int j = 0; j <= 10;j++)
    {
        for (int i = 0; i < 100; i++) {
            if (czyPierwsza(i)) {
                cout << i << "  ";
            }


        }
        if (j % 10 == 0) {
            cout << endl;
        }

        system("pause");
    }