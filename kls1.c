#include <stdio.h>
int main()
{
    int a, b, c, licznik = 0;
    printf("Podaj dodatnia liczbe naturalna a: ");
    scanf("%d", &a);
    printf("Podaj dodatnia liczbe naturalna b: ");
    scanf("%d", &b);
    printf("Podaj dodatnia liczbe naturalna c: ");
    scanf("%d", &c);
    printf("a)\n");
    if (a % 3 == b % 3 || a % 3 == c % 3 || b % 3 == c % 3)
        printf("Reszty z dzielenia %d przez 3, %d przez 3, %d przez 3 powtarzaja sie\n", a, b, c);
    else
        printf("Reszty z dzielenia %d przez 3, %d przez 3, %d przez 3 NIE powtarzaja sie\n", a, b, c);  
    printf("b)\n");
    for (int x = 1; x <= a + b; x++)
    {
        if(a % 3 == b % 3 || a % 3 == x % 3 || x % 3 == b % 3 )
        {
        printf("%d", x);
        licznik += 1;
        }
        
    }    
    printf("\nc)\n");
    printf("%d", licznik);
    return 0;

}