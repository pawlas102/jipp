#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846


static int polekwadrat()
{
    double a;
    printf("Podaj dlugosc boku kwadratu: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Blad: podaj liczbe\n");
    }

    if (a <= 0)
    {
        printf("Bok kwadratu musi byc dodatni\n");
        return 1;
    }

    printf("Pole kwadratu: %lf\n", a * a);
    return 0;
}

static int obwodkwadrat()
{
    double a;
    printf("Podaj dlugosc boku kwadratu: ");
    if (scanf("%lf", &a) != 1)
        ;
    {
        printf("Blad: podaj liczbe\n");
    }

    if (a <= 0)
    {
        printf("Bok kwadratu musi byc dodatni\n");
        return 1;
    }

    printf("Obwod kwadratu: %lf\n", 4 * a);
    return 0;
}

static int poletrojkat()
{
    double a, b, c;
    printf("Podaj dlugosci bokow trojkata (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
        ;
    {
        printf("Blad: podaj trzy liczby\n");
    }

    if (a <= 0 || b <= 0 || c <= 0)
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

    printf("Pole trojkata: %.6f\n", S);
    return 0;
}

static int obwodtrojkat()
{
    double a, b, c;
    printf("Podaj dlugosci bokow trojkata (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
        ;
    {
        printf("Blad: podaj trzy liczby\n");
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Boki trojkata musza byc dodatnie\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Z podanych dlugosci nie mozna zbudowac trojkata\n");
        return 1;
    }

    double obwod = a + b + c;

    printf("Obwod trojkata: %.6f\n", obwod);
    return 0;
}

static int polekola()
{
    double r;
    printf("Podaj promien kola: ");
    if (scanf("%lf", &r) != 1)
        ;
    {
        printf("Blad: podaj liczbe\n");
    }

    if (r <= 0)
    {
        printf("Promien kola musi byc dodatni\n");
        return 1;
    }

    double S = pi * r * r;

    printf("Pole kola: %.6f\n", S);
    return 0;
}

static int obwodkola()
{
    double r;
    printf("Podaj promien kola: ");
    if (scanf("%lf", &r) != 1)
        ;
    {
        printf("Blad: podaj liczbe\n");
    }

    if (r <= 0)
    {
        printf("Promien kola musi byc dodatni\n");
        return 1;
    }

    double obwod = 2 * pi * r;

    printf("Obwod kola: %.6f\n", obwod);
    return 0;
}
static int poleprostokata()
{
    double a, b;
    printf("Podaj dlugosci bokow prostokata (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2)
        ;
    {
        printf("Blad: podaj dwie liczby\n");
    }

    if (a <= 0 || b <= 0)
    {
        printf("Boki prostokata musza byc dodatnie\n");
        return 1;
    }

    double S = a * b;

    printf("Pole prostokata: %.6f\n", S);
    return 0;
}

static int obwodprostokata()
{
    double a, b;
    printf("Podaj dlugosci bokow prostokata (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2)
        ;
    {
        printf("Blad: podaj dwie liczby\n");
    }

    if (a <= 0 || b <= 0)
    {
        printf("Boki prostokata musza byc dodatnie\n");
        return 1;
    }

    double obwod = 2 * (a + b);

    printf("Obwod prostokata: %.6f\n", obwod);
    return 0;
}
int main()
{
    polekwadrat();
    obwodkwadrat();
    poletrojkat();
    obwodtrojkat();
    polekola();
    obwodkola();
    poleprostokata();
    obwodprostokata();
}



