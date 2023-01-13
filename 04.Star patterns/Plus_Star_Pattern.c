#include <stdio.h>
int main()
{
  int rows;
  printf("Enter a number");
  scanf("%d", &rows);
  int space = rows - 1;
  int plus = 1;

  for (int i = 1; i <= (rows * 2) - 1; i++)
  {
    if (i == rows)
    {
      for (int j = 1; j <= rows * 2; j++)
      {
        printf("+");
      }
    }
    else
    {
      for (int j = 1; j <= space; j++)
      {
        printf(" ");
      }
      for (int j = 1; j <= plus; j++)
      {
        printf("+");
      }
    }
    printf("\n");
  }
}
