#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, x3, y1, y2, y3, X1, X2, X3, Y1, Y2, Y3;
    double square1, square2;

    printf("Введите число x1: ");
    scanf("%d", &x1);
    printf("Введите число y1: ");
    scanf("%d", &y1);
    printf("Введите число x2: ");
    scanf("%d", &x2);
    printf("Введите число y2: ");
    scanf("%d", &y2);
    printf("Введите число x3: ");
    scanf("%d", &x3);
    printf("Введите число y3: ");
    scanf("%d", &y3);

    printf("Введите число X1: ");
    scanf("%d", &X1);
    printf("Введите число Y1: ");
    scanf("%d", &Y1);
    printf("Введите число X2: ");
    scanf("%d", &X2);
    printf("Введите число Y2: ");
    scanf("%d", &Y2);
    printf("Введите число X3: ");
    scanf("%d", &X3);
    printf("Введите число Y3: ");
    scanf("%d", &Y3);

    square1 = fabs(0.5 * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
    square2 = fabs(0.5 * (X1*(Y2-Y3) + X2*(Y3-Y1) + X3*(Y1-Y2)));

    if (square1 > square2) {
        printf("ПЛОЩА ПЕРШОГО ТРИКУТНИКА БІЛЬША = %.2f\n", square1);
    } else if (square1 < square2) {
        printf("ПЛОЩА ДРУГОГО ТРИКУТНИКА БІЛЬША = %.2f\n", square2);
    } else if (square1 == square2) {
        printf("ПЛОЩА ТРИКУТНИКІВ РІВНА = %.2f\n", square1);
    } else {
        printf("ПОРІВНЯТИ ПЛОЩІ НЕ МОЖЛИВО!\n");
    }

    return 0;
}
 
