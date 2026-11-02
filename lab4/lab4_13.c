#include <stdio.h>

int main()
{
    FILE *f = fopen("C:\\Users\\barti\\Desktop\\jipp\\lab4\\lab4_13t.txt", "r");

    if (f == NULL) {
        printf("lipa");
        return 1;
    }
    int znak;
    
    while ((znak = fgetc(f)) != EOF)
    {
        putchar(znak);
    }
    
    fclose(f);
    
    return 0;
}
