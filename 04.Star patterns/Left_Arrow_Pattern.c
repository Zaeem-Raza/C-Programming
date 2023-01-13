#include <stdio.h>
int main()
{
  int rows;
  printf("Enter number of rows\n");
  scanf("%d", &rows);
  int star = rows;
  int space = rows - 1;

  for (int i = 1; i <= (rows * 2) - 1; i++)
  {

    for (int j = 1; j <= space; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= star; j++)
    {
      printf("*");
    }
    printf("\n");

    if (i < rows)
    {
      space--;
      star--;
    }
    else
    {
      space++;
      star++;
    }
  }
}
