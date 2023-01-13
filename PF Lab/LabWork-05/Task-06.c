#include <stdio.h>
int strongNumber(int num);
int factorial(int num);
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int result = strongNumber(num);
  if(result == num) {
    printf("%d is Strong Number", num);
  }
  return 0;
}

int strongNumber(int num) {
  int total = 0;
  while(num != 0) {
    int digit = num % 10;
    num /= 10;
    int fact = factorial(digit);
    total = total + fact;
  }
  return total;
}

int factorial(int num) {
  int factorial = 1;
  for(int i=1; i<=num; i++) {
    factorial *= i;
  }
  return factorial;
}
