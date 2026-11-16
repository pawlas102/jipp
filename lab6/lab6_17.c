#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

int main()
{
    char **tekst;
    char nowa[MAX_LINE];
    int liczba, n, i;

    printf("Podaj liczbe linii: ");
    scanf("%d", &liczba);
    getchar();

    tekst = (char **)malloc(liczba * sizeof(char *));

    for (i = 0; i < liczba; i++)
    {
        tekst[i] = (char *)malloc(MAX_LINE * sizeof(char));
        printf("Linia %d: ", i + 1);
        fgets(tekst[i], MAX_LINE, stdin);
        for (int j = 0; tekst[i][j] != '\0'; j++)
            if (tekst[i][j] == '\n')
                tekst[i][j] = '\0';
    }

    printf("Po jakiej linii wstawic nowa linie: ");
    scanf("%d", &n);
    getchar();
    printf("Podaj nowa linie: ");
    fgets(nowa, MAX_LINE, stdin);
    for (i = 0; nowa[i] != '\0'; i++)
        if (nowa[i] == '\n')
            nowa[i] = '\0';

    tekst = (char **)realloc(tekst, (liczba + 1) * sizeof(char *));
    for (i = liczba; i > n; i--)
        tekst[i] = tekst[i - 1];

    tekst[n] = (char *)malloc(MAX_LINE * sizeof(char));
    strcpy(tekst[n], nowa);
    liczba++;

    printf("\nTekst po wstawieniu:\n");
    for (i = 0; i < liczba; i++)
        printf("%s\n", tekst[i]);

    for (i = 0; i < liczba; i++)
        free(tekst[i]);
    free(tekst);

    return 0;
}
