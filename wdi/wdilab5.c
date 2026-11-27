#include <stdio.h>

int main(void) {
    double a, b;
    char operacja;

    printf("Podaj dwie liczby: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        puts("Blad: niepoprawne dane wejsciowe.");
        return 1;
    }

    printf("Wybierz operacje (+, -, *, /): ");
    if (scanf(" %c", &operacja) != 1) {
        puts("Blad: nie udalo sie wczytac znaku operacji.");
        return 1;
    }

    switch (operacja) {
        case '+':
            printf("Wynik: %.2f\n", a + b);
            break;
        case '-':
            printf("Wynik: %.2f\n", a - b);
            break;
        case '*':
            printf("Wynik: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                puts("Blad: dzielenie przez zero.");
            } else {
                printf("Wynik: %.2f\n", a / b);
            }
            break;
        default:
            puts("Nieznana operacja");
            break;
    }

    return 0;
}