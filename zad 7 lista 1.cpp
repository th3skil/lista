#include <iostream>
using namespace std;
int main()
{
    int x, i, j, k;
    cout << "Wpisz wielkosc choinki: ";
    cin >> x;
    for (i = 1;i <= x - 1;i++)
    {
        for (j = x - 2;j >= i;j--)
        {
            cout << " ";

        }
        for (k = 1;k <= (2 * i - 1);k++)
        {
            cout << "*";
        }
        cout << endl;
       
    }
    int ile{};
    do
    {
        cout << " ";
        ile++;
    } while (ile <= (x - 3));
    cout << "#" << endl;
  int c{};
  for (c = 1;c <= (2 * i - 3);c++)
  {
   cout << "-";
  }
        cout << endl;
    return 0;
}