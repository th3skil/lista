#include <iostream>
using namespace std;
int zmiana(char tekst[], int ROZMIAR)
{

    int x = strlen(tekst);
    int OOOO = 0;
    for (int i = 0; i < x + 1; i++)
    {
      if (tekst[i] == 'o' || tekst[i] == 'O')
            if (tekst[i + 1] == 'o' || tekst[i + 1] == 'O')
            {
                OOOO++;
            }
      if (tekst[i] == 0)
      {
            break;
      }
    }


    return OOOO;
}

int main()
{
    const int ROZMIAR = 1024;
    char tekst[ROZMIAR];
    cout << "wprowadź tekst: ";
    cin.getline(tekst, 1024);
    int OOOO = zmiana(tekst, ROZMIAR);
    cout << "\nliczba powtorzen (oo) to: " << OOOO;

}
