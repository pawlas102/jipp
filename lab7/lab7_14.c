#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char *argv[])
{
    double *x, *y, *z;
    double s, mx, my;
    FILE *fd, *fw;
    int n;

    if (argc != 3)
    {
        printf("Uzycie: lab7_14 dane.txt wyniki.txt\n");
        return 1;
    }

    fd = fopen(argv[1], "r");
    if (fd == NULL)
    {
        printf("Nie mozna otworzyc pliku danych.\n");
        return 1;
    }

    fw = fopen(argv[2], "w");
    if (fw == NULL)
    {
        printf("Nie mozna otworzyc pliku wynikowego.\n");
        fclose(fd);
        return 1;
    }

    fscanf(fd, "%d", &n);

    x = DajWekt(n);
    y = DajWekt(n);
    z = DajWekt(n);

    if (x == NULL || y == NULL || z == NULL)
    {
        printf("Brak pamieci.\n");
        fclose(fd);
        fclose(fw);
        free(x);
        free(y);
        free(z);
        return 1;
    }

    CzytWekt(fd, x, n);
    CzytWekt(fd, y, n);

    DodWekt(x, y, z, n);
    s = IloczynSkal(x, y, n);
    mx = MaxElem(x, n);
    my = MaxElem(y, n);

    PiszWekt(fw, z, n);
    fprintf(fw, "\nilocz.skal=%lf mx=%lf my=%lf\n", s, mx, my);

    fclose(fd);
    fclose(fw);
    free(x);
    free(y);
    free(z);

    return 0;
}
