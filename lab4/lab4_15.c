#include <stdio.h>
#include <math.h>

// funkcja do liczenia wzoru z zadania
double ff(double x) {
    return 1 / (x * x + sqrt(1 + 2 * x + 3 * x * x));
}

int main() {
    double a, b, dx, x, y;
    FILE *fw;

    // wczytywanie danych od uzytkownika
    printf("Podaj a: ");
    scanf("%lf", &a);

    printf("Podaj b: ");
    scanf("%lf", &b);

    printf("Podaj dx: ");
    scanf("%lf", &dx);

    // otwarcie pliku do zapisu
    fw = fopen("wyniki.txt", "w");

    // petla tablicujaca
    for (x = a; x <= b; x = x + dx) {
        y = ff(x);
        
        fprintf(fw, "\t%10.2lf\t\t%15.4lf\n", x, y);
        printf("\t%10.2lf\t\t%15.4lf\n", x, y);
        
        fflush(fw); // wymuszenie zapisu do pliku
    }

    fclose(fw);

    return 0;
}