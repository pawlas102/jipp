#include <stdio.h>
#define PI 3.14159265358979323846

void kolo(double r, double *w1, double *w2);

int main()
{
    double w1, w2;
    kolo(5.0, &w1, &w2);
    printf("Pole kola: %.2f\n", w1);
    printf("Obwod kola: %.2f\n", w2);

    return 0;
}

void kolo(double r, double *w1, double *w2)
{
    *w1 = PI * r * r;
    *w2 = 2 * PI * r;
}