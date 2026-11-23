#include <stdio.h>
#include <stdlib.h>
#include "util.h"

double *DajWekt(int n)
{
    double *we;
    we = (double *)malloc(n * sizeof(double));
    return we;
}

void CzytWekt(FILE *fd, double *we, int n)
{
    int i;

    for (i = 0; i < n; i++)
        fscanf(fd, "%lf", &we[i]);
}

void PiszWekt(FILE *fw, double *we, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        fprintf(fw, "%lf ", we[i]);
        if (!((i + 1) % 5))
            fprintf(fw, "\n");
    }
}
