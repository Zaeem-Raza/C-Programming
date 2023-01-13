//  SUM OF FIRST 100 NATURAL NUMBERS

//#include <stdio.h>
//int sum(int k);
//
//int main()
//{
//	int result = sum(100);
//	printf("%d", result);
//	return 0;
//}
//
//int sum(int k)
//{
//	if (k > 0)
//	{
//		return k + sum(k - 1);
//	}
//	else
//	{
//		return 0;
//	}
//}




// FACTORIAL
//#include <stdio.h>
//unsigned long long int factorial(int);
//int main (void)
//{
//	for(int i = 0 ; i <= 10 ; i++)
//	{
//		printf("The factorial of %d is %d\n",i,factorial(i));
//	}
//	return 0;
//}
//unsigned long long int factorial(int a)
//{
//	if(a==0||a==1)
//		return 1;
//	else
//		return a*factorial(a-1);
//}




// / Fiboancci
// #include <stdio.h>
// int fibonacci (int);
// int main (void)
// {
// 	for(int i = 1 ; i <= 10 ; i++)
// 	{
// 		printf("%d , ",fibonacci(i));
// 	}
// 	return 0;
// }
// int fibonacci (int a)
// {
// 	if(a==1||a==0)
// 		return a;
// 	else
// 		return fibonacci(a-1)+fibonacci(a-2);
// }




// Multiply two integers
//#include <stdio.h>
//int multiply(int ,int );
//int main (void)
//{
//	int num1,num2;
//	printf("Enter two numbers : ");
//	scanf("%d %d",&num1,&num2);
//	printf("The product is %d",multiply(num1,num2));
//	return 0;
//}
//int multiply(int a,int b)
//{
//	if(a==0)
//		return 0;
//	else
//		return b + multiply(a-1,b);
//}





// Exponent
//#include <stdio.h>
//int power (int,int);
//int main (void)
//{
//	int base ; int exponent;
//	printf("Enter the number for base: ");
//	scanf("%d",&base);
//	printf("Enter the number for exponent : ");
//	scanf("%d",&exponent);
//	printf("%d^%d = %d",base,exponent,power(base,exponent));
//	return 0;
//}
//int power (int a,int b)
//{
//	if(b==0)
//		return 1;
//	else
//		return a*power(a,b-1);
//}




// REverse a number
//#include <stdio.h>
//int reverse (int);
//int main (void)
//{
//	int num=-1;
//	while(!(num>0))
//	{
//		printf("Enter a number : ");
//		scanf("%d",&num);
//	}
//	printf("The reversed number is %d",reverse(num));
//	return 0;
//}
//int reverse (int a)
//{
//	static reversed = 0;
//	if(a>0)
//	{
//		int sep = a % 10;
//		reversed = reversed * 10 + sep;
//		reverse(a/10);
//	}
//	else
//		return reversed;
//}




//// checking whether a number is prime or not
//#include <stdio.h>
//void isPrime (int);
//int main (void)
//{
//	int num=-1;
//	while(!(num>0))
//	{
//		printf("Enter a number : ");
//		scanf("%d",&num);
//	}
//	if (isprime(num))
//		printf("Yes, Number is Prime Number : ");
//	else
//		printf("No, Number is not Prime Number : ");
//}
//int isprime(int n)
//{
//	static i = 2;
//	if (n <= 2)
//		return (n == 2) ? 1 : 0;
//	if (n % i == 0)
//		return 0;
//	if (i * i > n)
//		return 1;
//	i++;
//	return isprime(n);
//}





// GCD using recursion
// #include <stdio.h>
// int GCD(int,int);
// int main (void)
// {
// 	int num1,num2;
// 	printf("Enter two integers : ");
// 	scanf("%d %d",&num1,&num2);
// 	printf("The GCD is %d",GCD(num1,num2));
// 	return 0;
// }
// int GCD(int a,int b)
// {
// 	if(b!=0)
// 		return GCD(b,a%b);
// 	else
// 		return a;
// }
