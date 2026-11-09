#include <stdio.h>

#define MAX_LINE 256

int moje_strcmp(const char *a, const char *b)
{
    while (*a == *b && *a != '\0')
    {
        a++;
        b++;
    }
    return *a - *b;
}

char *moje_strcpy(char *dokad, const char *skad)
{
    char *poczatek = dokad;

    while ((*dokad++ = *skad++) != '\0')
        ;

    return poczatek;
}

char *moje_strcat(char *dokad, const char *skad)
{
    char *poczatek = dokad;

    while (*dokad != '\0')
        dokad++;
    moje_strcpy(dokad, skad);

    return poczatek;
}

int main()
{
    char a[MAX_LINE], b[MAX_LINE], kopia[MAX_LINE];

    printf("Podaj pierwszy tekst: ");
    gets(a);
    printf("Podaj drugi tekst: ");
    gets(b);

    moje_strcpy(kopia, a);
    moje_strcat(a, b);

    printf("strcmp = %d\n", moje_strcmp(kopia, b));
    printf("strcpy = %s\n", kopia);
    printf("strcat = %s\n", a);
}
