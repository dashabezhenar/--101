#include <stdio.h>
#include <math.h>

int main() {

    int x ;
    double f;

  printf("Введіть число x:");
  scanf("%d", &x); 
  

 if(x>0) {
   
   f= pow(x,2)+5*x-6;
   
   }
   
else if (x<=0) {
  
   f=fabs(x+cos(x));
  
  }
  
  else {

printf ("Не можливо !");
    
  }
  printf ("f = %.2f", f) ;

    return 0;
}
