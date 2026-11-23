#include <stdio.h>

#define MAX_LINE 256

int main()
{
    char tekst[MAX_LINE], slowo[MAX_LINE];
    int pozycja, i;

    printf("Podaj tekst z dwukropkami: ");
    fgets(tekst, MAX_LINE, stdin);
    for (i = 0; tekst[i] != '\0'; i++)
        if (tekst[i] == '\n')
            tekst[i] = '\0';

    printf("Podaj pozycje slowa: ");
    scanf("%d", &pozycja);

    i = 0;
    while (tekst[i] != '\0' && pozycja > 1)
    {
        if (tekst[i] == ':')
            pozycja--;
        i++;
    }

    if (tekst[i] != '\0')
    {
        int j = 0;
        while (tekst[i] != '\0' && tekst[i] != ':')
            slowo[j++] = tekst[i++];
        slowo[j] = '\0';
        printf("Szukane slowo: %s\n", slowo);
    }
    else
        printf("Nie ma slowa o takiej pozycji\n");

    return 0;
}
