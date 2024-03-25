#include <math.h>

int main() {

    int x, y,z;
    double t;

  printf("Введіть число x:");
  scanf("%d", &x );
  printf("Введіть число y:");
  scanf("%d", &y );
  printf("Введіть число z:");
  scanf("%d", &z );


 t = (double) (1+z) * (x+(y/z)) / (x-(1 + pow(x,2))) ;
  printf ("t = %.2f", t) ;

    return 0;
}
