//21.Write a program that inputs one five-digit number, separates the number into its individual digits and prints their sum.

#include <stdio.h>
int main (void)
{
	int num;
	printf("Enter any five digit number : ___\b\b\b\b\b");
	scanf("%d", &num);
	int sum = 0;
	for(int i = 1 ; i <= 5 ; i++)
	{
		int mod = num % 10;
		printf("%d , ", mod);
		num = num / 10;
		sum = sum + mod;
	}
	printf("\nThe sum of these numbers is %d", sum);
	return 0;
}
