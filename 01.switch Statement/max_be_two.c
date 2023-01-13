#include <stdio.h>
int main(){
  int num1;
  int num2;
  printf("Enter two numbers\n");
  scanf("%d %d",&num1,&num2);

  int temp=0;
  temp=num1>num2;
  // printf("%d",temp);

  switch (temp) {
    case 1:
        printf("%d is greater than %d",num1,num2);
        break;
    case 0:
        printf("%d is greater than %d",num2,num1);
        break;
    default:
          printf("Invaldi input");
  }
}
