#include <stdio.h>
#include <math.h>


int main() {
  int x,n, i, j ;
  printf("Введіть x: ");
  scanf("%d", &x);
  
    printf("Введіть n: ");
    scanf("%d", &n);


    int s = 0;
    
    float res = 0;

    for (i = 1; i <= n; i++) {

        s += i;

    }
  for (j = i ; i <= n ; i++) {

      s += i;

  }

    res = s * s * ((x+i)/j);

    printf("Res = %.1f\n", res);

    return 0;
}
