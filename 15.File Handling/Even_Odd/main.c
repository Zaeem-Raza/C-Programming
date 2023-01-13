#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
  FILE *f1, *f2, *f3;
  f1 = fopen("numbers.txt", "r");
  f2 = fopen("even.txt", "w");
  f3 = fopen("odd.txt", "w");
  int num;
  if (f1 == NULL || f2 == NULL || f3 == NULL)
  {
    printf("Error in opening files");
    exit(1);
  }
  else
  {
    while (fscanf(f1, "%d", &num) != EOF)
    {
      if (num % 2 == 0)
      {
        fprintf(f2, "%d\n", num);
      }
      else
      {
        fprintf(f3, "%d\n", num);
      }
    }
    printf("Done");
    fclose(f1);
    fclose(f2);
    fclose(f3);
  }
  return 0;
}