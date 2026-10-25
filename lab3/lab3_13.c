#include <stdio.h>

void hanoi(int N, char A, char B, char C)
{
    if (N == 1)
    {
        printf("Przenies krazek z kolka %c na kolek %c\n", A, B);
        return;
    }

    hanoi(N - 1, A, C, B);
    printf("Przenies krazek z kolka %c na kolek %c\n", A, B);
    hanoi(N - 1, C, B, A);
}

int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}