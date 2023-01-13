// Multiply two integers
#include <stdio.h>
int multiply(int ,int );
int main (void)
{
	int num1,num2;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	printf("The product is %d",multiply(num1,num2));
	return 0;
}
int multiply(int a,int b)
{
	if(a==0)
		return 0;
	else
		return b + multiply(a-1,b);
}
