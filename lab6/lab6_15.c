#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 256

int main()
{
    char **tekst;
    char *pom;
    int liczba, i, a, b;

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

    printf("Podaj numery dwoch linii do zamiany: ");
    scanf("%d %d", &a, &b);

    pom = tekst[a - 1];
    tekst[a - 1] = tekst[b - 1];
    tekst[b - 1] = pom;

    printf("\nTekst po zamianie:\n");
    for (i = 0; i < liczba; i++)
        printf("%s\n", tekst[i]);

    for (i = 0; i < liczba; i++)
        free(tekst[i]);
    free(tekst);

    return 0;
}
