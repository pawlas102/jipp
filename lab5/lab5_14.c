#include <stdio.h>

#define MAX_LINE 256

int main()
{
    char tekst[MAX_LINE], znak;
    int i, j;

    printf("Podaj tekst: ");
    gets(tekst);
    printf("Podaj znak: ");
    scanf("%c", &znak);

    i = 0;
    while (tekst[i] != '\0' && tekst[i] != znak)
        i++;

    if (tekst[i] == znak)
    {
        j = i;
        while (tekst[j] != '\0')
        {
            tekst[j] = tekst[j + 1];
            j++;
        }
    }

    printf("%s\n", tekst);
}
