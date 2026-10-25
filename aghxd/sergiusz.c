#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int a1 = 0, b1 = 0, c1 = 0;
    a1 = a % 3;
    b1 = b % 3;
    c1 = c % 3;
    if (a1 == b1)
    {
        printf("a i b sa rowne \n");
    }
    if (a1 == c1)
        {
            printf("a i c sa rowne \n");
        }
    if (b1 == c1)
        {
            printf("b i c sa rowne \n");
        }
    if (a1 == b1 && b1 == c1)
        {
            printf("a, b i c sa rowne \n");
        }
    // na wszelki
    if (a1 != b1 && a1 != c1 && b1 != c1)
        {
            printf("a, b i c sa rozne \n");
        }
    // 2 i 3
    int array[a + b - 1];
    int counter = 0;
    int arraymod[2];
    arraymod[0] = a % 3;
    arraymod[1] = b % 3;

    for (int i = 0; i < a + b - 1; i++)
    {
        array[i] = i + 1;
    }

    for (int i = 0; i < a + b - 1; i++)
    {
        if (array[i] % 3 == arraymod[0] || array[i] % 3 == arraymod[1])
            {
                printf("%d \n", array[i]);
                counter++;
            }
    }
    printf("Liczba liczb z ostatniego ppkt: %d \n", counter);
}