#include <stdio.h>
#include <math.h>

void z(double *x, double *y, int *nw, double *sol);

int main()
{
    double x = 5;
    double y = 10;
    int nw = 0;
    double sol = 0;
    z(&x, &y, &nw, &sol);
    printf("numer wzoru: %d, rozwiazanie: %f", nw, sol);
}

void z(double *x, double *y, int *nw, double *sol)
{
    if ((pow(*x, 2) + pow(*y, 2)) <= 1)
    {
        *sol = pow(*x, 2) + *y;
        *nw = 1;
    }
    if (*y > *x + 5)
    {
        *sol = 2 * (*x) + pow(*y, 2);
        *nw = 2;
    }
    if (pow(*x, 2) + pow(*y, 2) > 1 && *y <= *x + 5)
    {
        *sol = 0.5 * pow(*x, 2) + *y;
        *nw = 3;
    }
}
// wiem ze  x i y moglby byc bez wskaznika, ale to w ramach przyzwyczajenia do wielu *