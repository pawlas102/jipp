#include<stdio.h>

void rec(int *n, int *suma);

int main()
{
    int n = 5;
    int suma = 0;
    rec(&n, &suma);
    printf("%d", suma);
}

void rec(int *n, int *suma)
{
    if(*n>0)
    {
        *suma+=*n;
        *n-=1;
        rec(n, suma);
    }
}

