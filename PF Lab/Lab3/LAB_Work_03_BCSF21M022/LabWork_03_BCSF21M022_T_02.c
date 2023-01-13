#include <stdio.h>
int main(){
  int num1;
  int num2;
  printf("Enter first number");
  scanf("%d",&num1);
  printf("Enter second number");
  scanf("%d",&num2);
//swapping

num1=num1+num2;
num2=num1-num2;
num1=num1-num2;

printf("After Swapping\n");
printf("num1 is %d\n",num1);
printf("num2 is %d\n",num2);
}
