#include <stdio.h>
int add(int x,int y){
  return x+y;
}
int subtract(int x,int y){
  return x-y;
}
int multiply(int x,int y){
  return x*y;
}
int division(int x,int y){
  return x/y;
}
int main(){
  int num1,num2;
  char oper;
  printf("Welcome to Simple Calculator\n");
  printf("Enter Calculation_____\b\b\b\b");
  scanf("%d %c %d",&num1,&oper,&num2);

  switch (oper) {
    case '+':
             printf("%d + %d = %d",num1,num2,add(num1,num2));
             break;
    case '-':
             printf("%d - %d = %d",num1,num2,subtract(num1,num2));
             break;
    case '*':
            printf("%d * %d = %d",num1,num2,multiply(num1,num2));
            break;
    case '/':
            printf("%d / %d = %d",num1,num2,division(num1,num2));
            break;



  }
}
