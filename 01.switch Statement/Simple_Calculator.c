                                              /*Simple Calculator*/
#include <stdio.h>
int main(){
  float num1;
  float num2;
  char op;
  float result;
  printf("Welcome to simple calculator\n");
  printf("Enter mathematical operation\n I can operate [+,-,/,*]\n");
  scanf("%f %c  %f",&num1,&op,&num2);

  // calculator
  switch (op) {
    case '+':
           result = num1 + num2;
            break;
    case '-':
             result = num1 - num2;
            break;
    case '/':
             result = num1 / num2;
             break;

    case '*':
           result = num1 * num2;
           break;
    default:
         printf("Invalid input");
         break;

}

 printf("%.2f %c %.2f =%.2f",num1,op,num2,result);

}
