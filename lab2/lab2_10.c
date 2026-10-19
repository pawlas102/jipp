#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Podaj dlugosci bokow trojkata (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Blad: podaj trzy liczby\n");
        return 1;
    }

    if (a <= 0.0 || b <= 0.0 || c <= 0.0)
    {
        printf("Boki trojkata musza byc dodatnie\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Z podanych dlugosci nie mozna zbudowac trojkata\n");
        return 1;
    }

    double p = (a + b + c) / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double R = S / p;

    printf("Trojkat istnieje.\n");
    printf("Pole: %.6f\n", S);
    printf("Promien kola wpisanego: %.6f", R);

    return 0;
}
