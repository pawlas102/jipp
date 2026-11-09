#include <stdio.h>

#define MAX_LINE 256

int main()
{
    char tekst[MAX_LINE], znak;
    int i = 0;

    printf("Podaj tekst: ");
    gets(tekst);
    printf("Podaj znak: ");
    scanf("%c", &znak);

    while (tekst[i] != '\0' && tekst[i] != znak)
        i++;

    if (tekst[i] == '\0')
        printf("-1\n");
    else
        printf("%d\n", i);
}
