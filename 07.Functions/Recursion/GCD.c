// GCD using recursion
#include <stdio.h>
int GCD(int,int);
int main (void)
{
	int num1,num2;
	printf("Enter two integers : ");
	scanf("%d %d",&num1,&num2);
	printf("The GCD is %d",GCD(num1,num2));
	return 0;
}
int GCD(int a,int b)
{
	if(b!=0)
		return GCD(b,a%b);
	else
		return a;
}
