#include <stdio.h>
int main()
{

  int k;
  printf("Enter number of rows");
  scanf("%d", &k);
  while (k < 1)
  {
    printf("Wrong input\nEnter again");
    scanf("%d", &k);
  }

  // variables for stars and spaces
  int a = k - 1; // for spaces
  int b = 1;     // for stars

  // 1st outer loop
  for (int i = 0; i < k; i++)
  {

    // 1st inner loop
    for (int j = 0; j < a; j++)
    {
      printf(" ");
    }

    // 2nd inner loop
    for (int j = 0; j < b; j++)
    {
      printf("*");
    }

    // 3rd inner loop (optional)
    for (int j = 0; j < a; j++)
    {
      printf(" ");
    }
    a--;
    b = b + 2;
    printf("\n");
  }

  a++; // for decrement and increment prior to entering 2nd loop
  b = b - 2;
  // 2nd Inner loop

  for (int i = 0; i < k; i++)
  {
    a++;
    b = b - 2;
    // 1st inner loop
    for (int j = 0; j < a; j++)
    {
      printf(" ");
    }

    // 2nd inner loop
    for (int j = 0; j < b; j++)
    {
      printf("*");
    }

    // 3rd inner loop (optional)
    for (int j = 0; j < a; j++)
    {
      printf(" ");
    }

    printf("\n");
  }
}
