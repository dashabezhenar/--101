#include<stdio.h>
int main(void){

    int a;
    printf("Ведіть порядковий номер місяця ");
    scanf("%d", &a);
    switch (a)
    {
        case 1:
            printf("Січень\nЗима");
        break;

        case 2:
            printf("Лютий\nЗима");
        break;

        case 3:
            printf("Березень\nВесна");
        break;

        case 4:
            printf("Квітень\nВесна");
        break;

        case 5:
            printf("Травень\nВесна");
         break;

        case 6:
            printf("Червень\nЛіто");
        break;

        case 7:
            printf("Липень\nЛіто");
        break;

        case 8:
            printf("Серпень\nЛіто");
        break;

        case 9:
            printf("Вересень\nОсінь");
        break;

        case 10:
            printf("Жовтень\nОсінь");
        break;
      case 11:
          printf("Листопад\nОсінь");
      break;

      case 12:
          printf("Грудень\nЗима");
      break;

    default:
        printf("Такого місяця немає\n");
    }
    return 0;
}
