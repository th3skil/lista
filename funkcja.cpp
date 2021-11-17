#include <iostream>
#include "funkcja.h"
int obliczNWD(int a, int b)
{
    while (b != 0) {
        int iloraz = a / b;
        int reszta = a % b;

        a = b;
        b = reszta;
    }

    return a;
}
