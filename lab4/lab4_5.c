#include <stdio.h>

int silnia(int n)
{
    int res = n;
    do
    {
        n -= 1;
        res *= n;
    } while (n > 1);

    return res;
}

int main()
{
    int n = 5;
    printf("%d\n", silnia(n));
    return 0;
}