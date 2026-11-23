#include "util.h"

void DodWekt(double *w1, double *w2, double *w3, int n)
{
    int i;

    for (i = 0; i < n; i++)
        w3[i] = w1[i] + w2[i];
}

double IloczynSkal(double *w1, double *w2, int n)
{
    double s = 0;
    int i;

    for (i = 0; i < n; i++)
        s = s + w1[i] * w2[i];

    return s;
}

double MaxElem(double *w, int n)
{
    double max = w[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (w[i] > max)
            max = w[i];
    }

    return max;
}
