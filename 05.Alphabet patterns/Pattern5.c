#include <stdio.h>
int main()
{
  int rows;
  printf("Enter number of rows");
  scanf("%d", &rows);
  int c = 65;
  int t = c;
  int space = rows - 1;
  int alpha = 1;
  for (int i = 1; i <= rows; i++)
  {

    for (int j = 1; j <= space; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= alpha; j++)
    {
      printf("%c", c);
      c--;
    }
    printf("\n");
    c = t + 2 * i;
    space--;
    alpha += 2;
  }
}
