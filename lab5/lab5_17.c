#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

int main()
{
    char tekst1[MAX_LINE], tekst2[MAX_LINE];
    int pozycja;

    printf("Podaj pierwszy tekst: ");
    gets(tekst1);
    printf("Podaj drugi tekst: ");
    gets(tekst2);
    printf("Podaj pozycje: ");
    scanf("%d", &pozycja);

    strcat(tekst1, tekst2 + pozycja);
    printf("%s\n", tekst1);
}
