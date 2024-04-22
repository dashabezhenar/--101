
#include<stdio.h>
#include<math.h>

int main() {

    int x;
  printf("ведіть x");
    scanf("%d",&x);
  
  int sum= 0;
    for (int i = 10; i <= 100; i+=2) 
      
      { if (i >x ) {
     
    sum += i;}
}
  printf("Сума чисел,більших за %d в діапазоні від 10 до 100: %d\n", x, sum );
  

    return 0;
}
