#include <stdio.h>

void zamien(int *x, int *y);

int main()
{
    int x, y;
    x = 1;
    y = 2;

    zamien(&x, &y);

    if (x == 2 && y == 1)
        printf("ok");
}

void zamien(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
