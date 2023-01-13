#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    // we can swap two numbers without using a third variable using XOR operator
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping: num1=%d num2=%d",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("\nAfter swapping: num1=%d num2=%d",num1,num2);
    return 0;
}