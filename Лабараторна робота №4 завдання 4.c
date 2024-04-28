#include <stdio.h>
#include <math.h>

int main() {
    double a = -1, b = 3, dx = 0.05;
    double x, y;

    printf("x\t|\ty=f(x)\n");
    printf("-------------------\n");

    for (x = a; x <= b; x += dx) {
        if (x <= 0) {
            printf("%.2f\t|\tНеможна визначити \n", x);
        } else {
            y = log(x) / x;
            printf("%.2f\t|\t%.4f\n", x, y);
        }
    }

    return 0;
}
