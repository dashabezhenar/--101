#include <stdio.h>

int main() {
    int a, b, c;


    printf("Введіть число a:");
  scanf("%d", &a );
  printf("Введіть число b:");
  scanf("%d", &b );
  printf("Введіть число c:");
  scanf("%d", &c );  



int temp = a;
    // Змінюєм B у A
     a = b;
    // Міняєм C у B
     b = c;
    // Міняєм А у C
     c = temp;

   printf("Нові значення: a = %d, b = %d, c = %d\n", a, b, c);




    return 0;
}
