  // This program gets two integers from the user and prints the sum, difference,  division and multiplication
#include <stdio.h>
int main(){
int num1;
int num2;
printf("Enter first integer:");
scanf("%d",&num1);
printf("Enter second integer:");
scanf("%d",&num2);

// Addition
       printf("The sum of two numbers is %d\n",num1+num2);
// Difference
       printf("The difference of two intgers is %d\n",num1-num2);
// Multiplication
       printf("The product of two integers is %d\n",num1*num2);
// Division
       printf("The Quotient of two integers is %d\n",num1/num2);
// Modulus
       printf("The Modulus of two integers is %d\n",num1%num2);
}
