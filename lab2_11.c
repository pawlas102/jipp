#include <stdio.h>

int main()
{
    int a, b, c, d;
    int najwieksza;
    int pozycja;

    printf("Podaj cztery liczby calkowite (a b c d): ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4)
    {
        printf("Blad: podaj cztery liczby calkowite\n");
        return 1;
    }

    najwieksza = a;
    pozycja = 1;

    if (b > najwieksza)
    {
        najwieksza = b;
        pozycja = 2;
    }
    if (c > najwieksza)
    {
        najwieksza = c;
        pozycja = 3;
    }
    if (d > najwieksza)
    {
        najwieksza = d;
        pozycja = 4;
    }

    printf("Najwieksza liczba: %d\n", najwieksza);
    printf("Pozycja: %d", pozycja);

    return 0;
}