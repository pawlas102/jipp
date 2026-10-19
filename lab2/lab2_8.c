#include <stdio.h>
#include <math.h>

int main()
{
    double x = 3.14;
    double y = 12.56;
    double z = 7.0;
    int k = 2;
    int m = 4;

    double w1 = cbrt(x / (y * z)) * log(x * x + y * y);
    printf("w1 = %.8f\n", w1);

    double w2 = sin(k * x / 2.0) * cos(m * y) + y * exp(2.0 * x - 1.0);
    printf("w2 = %.8f\n", w2);

    double w3 = fabs(x / (2.0 * y * y + 1.0)) + sqrt(y / (z * z + 3.0)) + 5.0 * pow(y + z, 3.0);
    printf("w3 = %.8f\n", w3);

    double w4 = x / (y * z) * cbrt(z + 1.0) + pow(x * x + z * z + 1.0, 1.0 / k) - fabs(y);
    printf("w4 = %.8f\n", w4);

    double w5 = 1.0 / sqrt(x * x + y * y + k * k) + sin(k * y) / x;
    printf("w5 = %.8f", w5);

    return 0;
}
