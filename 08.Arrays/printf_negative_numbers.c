#include <stdio.h>
int main()
{
  int num[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &num[i]);
  }
  printf("The negative numbers are");
  for (int i = 0; i < 5; i++)
  {
    if (num[i] < 0)
    {
      printf("%d\n", num[i]);
    }
  }
}
