#include <stdio.h>
int main()
{
  int rows;

  printf("Enter number of rows");
  scanf("%d", &rows);
  while (rows < 1)
  {
    printf("Input Error\nEnter again");
    scanf("%d", &rows);
  }
  int space = 0;
  int star = (rows * 2) - 1;

  for (int i = 1; i <= rows; i++)
  {

    for (int j = 1; j <= space; j++)
    {
      printf(" ");
    }

    for (int j = 1; j <= star; j++)
    {
      printf("*");
    }
    space++;
    star -= 2;
    printf("\n");
  }
}
