// REverse a number
#include <stdio.h>
int reverse (int);
int main (void)
{
	int num=-1;
	while(!(num>0))
	{
		printf("Enter a number : ");
		scanf("%d",&num);
	}
	printf("The reversed number is %d",reverse(num));
	return 0;
}
int reverse (int a)
{
	static reversed = 0;
	if(a>0)
	{
		int sep = a % 10;
		reversed = reversed * 10 + sep;
		reverse(a/10);
	}
	else
		return reversed;
}
