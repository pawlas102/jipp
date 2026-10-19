#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

static void czysc_bufor(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static int polekwadrat(void)
{
    double a;
    printf("Podaj dlugosc boku kwadratu: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Blad: podaj liczbe\n");
        czysc_bufor();
        return 1;
    }

    if (a <= 0)
    {
        printf("Bok kwadratu musi byc dodatni\n");
        return 1;
    }

    printf("Pole kwadratu: %.6f\n", a * a);
    return 0;
}

static int obwodkwadrat(void)
{
    double a;
    printf("Podaj dlugosc boku kwadratu: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Blad: podaj liczbe\n");
        czysc_bufor();
        return 1;
    }

    if (a <= 0)
    {
        printf("Bok kwadratu musi byc dodatni\n");
        return 1;
    }

    printf("Obwod kwadratu: %.6f\n", 4 * a);
    return 0;
}

static int poletrojkat(void)
{
    double a, b, c;
    printf("Podaj dlugosci bokow trojkata (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Blad: podaj trzy liczby\n");
        czysc_bufor();
        return 1;
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

static int obwodtrojkat(void)
{
    double a, b, c;
    printf("Podaj dlugosci bokow trojkata (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Blad: podaj trzy liczby\n");
        czysc_bufor();
        return 1;
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

static int polekola(void)
{
    double r;
    printf("Podaj promien kola: ");
    if (scanf("%lf", &r) != 1)
    {
        printf("Blad: podaj liczbe\n");
        czysc_bufor();
        return 1;
    }

    if (r <= 0)
    {
        printf("Promien kola musi byc dodatni\n");
        return 1;
    }

    double S = PI * r * r;

    printf("Pole kola: %.6f\n", S);
    return 0;
}

static int obwodkola(void)
{
    double r;
    printf("Podaj promien kola: ");
    if (scanf("%lf", &r) != 1)
    {
        printf("Blad: podaj liczbe\n");
        czysc_bufor();
        return 1;
    }

    if (r <= 0)
    {
        printf("Promien kola musi byc dodatni\n");
        return 1;
    }

    double obwod = 2 * PI * r;

    printf("Obwod kola: %.6f\n", obwod);
    return 0;
}

static int poleprostokata(void)
{
    double a, b;
    printf("Podaj dlugosci bokow prostokata (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("Blad: podaj dwie liczby\n");
        czysc_bufor();
        return 1;
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

static int obwodprostokata(void)
{
    double a, b;
    printf("Podaj dlugosci bokow prostokata (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("Blad: podaj dwie liczby\n");
        czysc_bufor();
        return 1;
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

int main(void)
{
    if (polekwadrat() != 0) return 1;
    if (obwodkwadrat() != 0) return 1;
    if (poletrojkat() != 0) return 1;
    if (obwodtrojkat() != 0) return 1;
    if (polekola() != 0) return 1;
    if (obwodkola() != 0) return 1;
    if (poleprostokata() != 0) return 1;
    if (obwodprostokata() != 0) return 1;

    return 0;
}