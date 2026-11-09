#include <stdio.h>

#define MAX_LINE 256

int main()
{
    char tekst[MAX_LINE], stary, nowy;
    int i = 0;

    printf("Podaj tekst: ");
    gets(tekst);
    printf("Podaj znak zamieniany: ");
    scanf("%c", &stary);
    getchar();
    printf("Podaj nowy znak: ");
    scanf("%c", &nowy);

    while (tekst[i] != '\0')
    {
        if (tekst[i] == stary)
            tekst[i] = nowy;
        i++;
    }

    printf("%s\n", tekst);
}
