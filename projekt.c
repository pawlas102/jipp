#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

double sinus(double x, double e, int M, int *lws, int *ws)
{
    double suma = 0, wyraz = 1;
    int n;

    for (n = 0; n < M; n++)
    {
        suma += wyraz;
        if (fabs(wyraz) < e)
        {
            *lws = n + 1;
            if (n + 1 == M)
                *ws = 3;
            else
                *ws = 1;
            return suma;
        }
        wyraz *= -x * x / ((2 * n + 2) * (2 * n + 3));
    }
    *lws = M;
    *ws = 2;
    return suma;
}

double arccos_szereg(double x, double e, int M, int *lws, int *ws)
{
    double suma = 0, wyraz = x;
    int n;

    for (n = 0; n < M; n++)
    {
        suma += wyraz;
        if (fabs(wyraz) < e)
        {
            *lws = n + 1;
            if (n + 1 == M)
                *ws = 3;
            else
                *ws = 1;
            return PI / 2 - suma;
        }
        wyraz *= x * x * (2 * n + 1) * (2 * n + 1) / (2.0 * (n + 1) * (2 * n + 3));
    }
    *lws = M;
    *ws = 2;
    return PI / 2 - suma;
}

double sinh_szereg(double x, double a, double e, int M, int *lws, int *ws)
{
    double suma = 0, wyraz = a * x;
    int n;

    for (n = 0; n < M; n++)
    {
        suma += wyraz;
        if (fabs(wyraz) < e)
        {
            *lws = n + 1;
            if (n + 1 == M)
                *ws = 3;
            else
                *ws = 1;
            return suma;
        }
        wyraz *= a * a * x * x / ((2 * n + 2) * (2 * n + 3));
    }
    *lws = M;
    *ws = 2;
    return suma;
}

int main()
{
    int funkcja, n, i, M, lws, ws;
    double poczatek, koniec, a = 1, x, e, wynik, dokladna;
    FILE *plik;

    printf("1 - sin(x) / x\n2 - arccos(x)\n3 - sinh(a * x)\n");
    printf("Wybierz funkcje: ");
    scanf("%d", &funkcja);
    printf("Podaj poczatek, koniec i n: ");
    scanf("%lf %lf %d", &poczatek, &koniec, &n);
    if (funkcja == 3)
    {
        printf("Podaj wspolczynnik a: ");
        scanf("%lf", &a);
    }
    printf("Podaj epsilon i M: ");
    scanf("%lf %d", &e, &M);

    if (funkcja < 1 || funkcja > 3 || n <= 0 || e <= 0 || M <= 0)
    {
        printf("Niepoprawne dane wejściowe.\n");
        return 1;
    }

    plik = fopen("wyniki.txt", "w");
    printf("\nx\tf_szereg\tf_sciśle\tliczba wyrazow\twarunek stopu\n");
    fprintf(plik, "x\tf_szereg\tf_sciśle\tliczba wyrazow\twarunek stopu\n");

    for (i = 0; i <= n; i++)
    {
        x = poczatek + i * (koniec - poczatek) / n;

        if (funkcja == 1)
        {
            if (x == 0)
            {
                wynik = 1.0;
                dokladna = 1.0;
                lws = 1;
                ws = 1;
            }
            else
            {
                wynik = sinus(x, e, M, &lws, &ws);
                dokladna = sin(x) / x;
            }
        }
        else if (funkcja == 2)
        {
            if (x < -1 || x > 1)
            {
                printf("x = %.6f pomijam\n", x);
                fprintf(plik, "x = %.6f pomijam\n", x);
                continue;
            }
            wynik = arccos_szereg(x, e, M, &lws, &ws);
            dokladna = acos(x);
        }
        else
        {
            wynik = sinh_szereg(x, a, e, M, &lws, &ws);
            dokladna = sinh(a * x);
        }

        printf("%.6f\t%.6f\t%.6f\t%d\t\t%d\n",
               x, wynik, dokladna, lws, ws);
        fprintf(plik, "%.6f\t%.6f\t%.6f\t%d\t\t%d\n",
                x, wynik, dokladna, lws, ws);
    }

    fclose(plik);
    printf("\nWyniki zapisano w pliku wyniki.txt\n");
    return 0;
}
