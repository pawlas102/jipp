#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

int main()
{
    char tekst1[MAX_LINE], tekst2[MAX_LINE];

    printf("Podaj pierwszy tekst: ");
    gets(tekst1);
    printf("Podaj drugi tekst: ");
    gets(tekst2);

    strcat(tekst1, tekst2);
    printf("%s\n", tekst1);
}
