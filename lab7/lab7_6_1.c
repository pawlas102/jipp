#include <stdio.h>

double fun1(int x, int y); // funkcja globalna
static int fun2();         // funkcja dostepna tylko w tym pliku
extern int fun3();         // funkcja zdefiniowana w drugim pliku

static int c = 5; // zmienna globalna tylko dla tego pliku
double a, b = 10; // zmienne globalne dostepne z extern
char *xx[] = {"mama", "tato", "stryjek", (char *)0};
double aa[] = {1, 2, 3, 4, 5, 6};

static int fun2()
{
    static int k = 0; // wartosc pozostaje miedzy wywolaniami
    puts("ppp fun2");
    k++;
    return k;
}

int main()
{
    double x, y = 5;
    int i, j, k;
    static double aa[] = {11, 12, 13, 14, 15, 16};
    // lokalna aa zaslania globalna tablice aa

    printf("%lf %lf \n", aa[0], aa[1]);
    j = fun2();
    k = fun3();
    printf("j = %d, k = %d\n", j, k);

    return 0;
}
