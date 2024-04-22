#include<stdio.h>
#include<math.h>

int main(){

    int x, y, z;
    double a;

    printf("Ведіть значення z = ");
    scanf("%d", &z);

    do
    {
    printf("Ведіть значення x = ");
    scanf("%d", &x);

    printf("Ведіть значення y = ");
    scanf("%d", &y);

    if (y <= x) {

        printf("y має бути більше x\n");

    } else if (y > x) {

        a = (sqrt(x)+2*sqrt(y*z))/(sqrt(y)-2*sqrt(x*z));

    }

    } while (y <= x);

    printf("a = %.2f", a);
    return 0;
}
