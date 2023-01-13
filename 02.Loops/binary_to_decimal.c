#include <stdio.h>
#include <math.h>
int main (void)
{
	int num,n=0,sum=0;
	printf("Enter a binary num consists of only 0's and 1's : ");
	scanf("%d" , &num);
	int i=0;
	while(num>0)
	{
	sum+=(num%10)*pow(2,i);
		i++;
		num/=10;
	}
	printf("It's equivalent decimal number is  : %d",sum);
}
