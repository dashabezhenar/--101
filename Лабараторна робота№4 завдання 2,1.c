
#include<stdio.h>
#include<math.h>

int main() {

    int x;
  printf("ведіть x");
    scanf("%d",&x);
  
  int sum= 0;
    int i = 10; 
  while (i <= 100)
    {
      if (i % 2 == 0 && i > x )  
      
      { 
     
    sum += i;}
      i += 2;
}
  printf("Сума чисел,більших за %d в діапазоні від 10 до 100: %d\n", x, sum );
  

    return 0;
}
