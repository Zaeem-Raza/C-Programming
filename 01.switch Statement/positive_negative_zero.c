#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);

  int temp=num>0;
  int neg=num<0;
  // printf("%d",temp);

  switch (temp) {
    case 1:
            printf("%d is a positive number",num);
            break;
  case 0:
        switch (neg) {
          case 0:
            printf("%d is a zero",num);
            break;
          case 1:
            printf("%d is a negative number",num);
            break;
            default:
             printf("Invalid input");
             break;
        }
  break;
  }
}
