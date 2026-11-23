#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void losuj(int *t, int n)
{
    int i;

    srand((unsigned)time(NULL));

    for (i = 0; i < n; i++)
        t[i] = rand() % 100;
}

int main()
{
    int n, i;
    int *t1;
    int *t2;
    int min;
    int max;
    int minPoz;
    int maxPoz;

    printf("Podaj rozmiar tablic: ");
    scanf("%d", &n);

    t1 = (int *)malloc(n * sizeof(int));
    t2 = (int *)malloc(n * sizeof(int));

    if (n > 0 && t1 != NULL && t2 != NULL)
    {
        losuj(t1, n);

        min = t1[0];
        max = t1[0];
        minPoz = 0;
        maxPoz = 0;

        for (i = 1; i < n; i++)
        {
            if (t1[i] < min)
            {
                min = t1[i];
                minPoz = i;
            }
            if (t1[i] > max)
            {
                max = t1[i];
                maxPoz = i;
            }
        }

        printf("Tablica t1:\n");
        for (i = 0; i < n; i++)
            printf("%d ", t1[i]);

        printf("\nMinimum = %d, indeks = %d\n", min, minPoz);
        printf("Maksimum = %d, indeks = %d\n", max, maxPoz);

        memmove(t2, t1, n * sizeof(int));

        printf("Tablica t2:\n");
        for (i = 0; i < n; i++)
            printf("%d ", t2[i]);
        printf("\n");
    }
    else
    {
        printf("Nieprawidlowy rozmiar lub nie udalo sie przydzielic pamieci.\n");
    }

    free(t1);
    free(t2);

    return 0;
}
