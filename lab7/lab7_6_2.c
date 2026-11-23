#include <stdio.h>

double fun1(int x, int y)
{
    static char *xx[] = {"pies", "kot", "mysz", (char *)0};
    // tablica jest lokalna, ale zyje przez caly program
    int i = 0;
    i++;
    return 0;
}

char *xxxx[] = {"zima", "wiosna", "lato", (char *)0};

static double fun2() // inna funkcja niz fun2 w pierwszym pliku
{
    static char *zz[] = {"krzeslo", "szafa", "tapczan", (char *)0};
    puts("qqq fun2");
    return 2.0;
}

int fun3() // funkcja dostepna z pierwszego pliku
{
    double ff;
    puts("qqq fun3");
    ff = fun2();
    return 5;
}
