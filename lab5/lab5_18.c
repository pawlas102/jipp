#include <stdio.h>

#define MAX_TAB 100

int main()
{
    int tab[MAX_TAB], n, i, pom;

    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);

    printf("Podaj elementy: ");
    for (i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    pom = tab[n - 1];
    for (i = n - 1; i > 0; i--)
        tab[i] = tab[i - 1];
    tab[0] = pom;

    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}
