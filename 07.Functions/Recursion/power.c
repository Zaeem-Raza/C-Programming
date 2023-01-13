
// Exponent
#include <stdio.h>
int power (int,int);
int main (void)
{
	int base ; int exponent;
	printf("Enter the number for base: ");
	scanf("%d",&base);
	printf("Enter the number for exponent : ");
	scanf("%d",&exponent);
	printf("%d^%d = %d",base,exponent,power(base,exponent));
	return 0;
}
int power (int a,int b)
{
	if(b==0)
		return 1;
	else
		return a*power(a,b-1);
}
