#include <stdio.h>

int main()
{
    char a;
    int counta = 0;
    int countb = 0;
    int countc = 0;
    int count = 0;
    while (1)
    {
        scanf(" %c", &a);
        if (a == 'e')
            break;
        if (a == 'a')
        {
            counta++;
            continue;
        }
        if (a == 'b')
        {
            countb++;
            continue;
        }
        if (a == 'c')
        {
            countc++;
            goto wszystkie;
            continue;
        }
    wszystkie:
        count++;
    }
    printf("%d, %d, %d, %d", counta, countb, countc, count);
}
