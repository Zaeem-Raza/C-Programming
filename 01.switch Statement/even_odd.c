#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number");
  scanf("%d", &num);
  while (num < 1)
  {
    printf("Invalid input\n");
    printf("Enter again");
    scanf("%d", &num);
  }

  int even = 0;
  even = num % 2 == 0;
  // printf("%d\n",even);

  switch (even)
  {
  case 1:
    printf("It is an even number");
    break;
  case 0:
    printf("It is an odd number");
    break;
  default:
    printf("Invalid input");
  }
}
