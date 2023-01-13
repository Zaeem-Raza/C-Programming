#include <stdio.h>
int main(){
  int num1;
  int num2;
  printf("Enter first integer");
  scanf("%d",&num1);
  printf("Enter second integer");
  scanf("%d",&num2);

   int num3;
num3=num1;
num1=num2;
num2=num3;
printf("After Swapping:\n");
printf("num1= %d",num1);
printf("\nnum2=%d",num2);

}
