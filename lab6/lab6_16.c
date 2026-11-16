#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 256

int main()
{
    char **tekst;
    char poczatek[MAX_LINE];
    int liczba, i;

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

    printf("Podaj tekst, od ktorego ma zaczynac sie linia: ");
    fgets(poczatek, MAX_LINE, stdin);
    for (i = 0; poczatek[i] != '\0'; i++)
        if (poczatek[i] == '\n')
            poczatek[i] = '\0';

    printf("\nPasujace linie:\n");
    for (i = 0; i < liczba; i++)
    {
        int j = 0;
        while (poczatek[j] != '\0' && tekst[i][j] == poczatek[j])
            j++;
        if (poczatek[j] == '\0')
            printf("%s\n", tekst[i]);
    }

    for (i = 0; i < liczba; i++)
        free(tekst[i]);
    free(tekst);

    return 0;
}
