// checking whether a number is prime or not
#include <stdio.h>
void isPrime (int);
int main (void)
{
	int num=-1;
	while(!(num>0))
	{
		printf("Enter a number : ");
		scanf("%d",&num);
	}
	if (isprime(num))
		printf("Yes, Number is Prime Number : ");
	else
		printf("No, Number is not Prime Number : ");
}
int isprime(int n)
{
	static i = 2;
	if (n <= 2)
		return (n == 2) ? 1 : 0;
	if (n % i == 0)
		return 0;
	if (i * i > n)
		return 1;
	i++;
	return isprime(n);
}
