#include <stdio.h>
#define SIZE 20
int main()
{
  char str1[SIZE];
  char str2[SIZE];
  printf("Enter 1st string ");
  gets(str1);
  printf("Enter 2nd string ");
  gets(str2);
  int flag = 1;
  for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
  {
    if (str1[i] != str2[i])
    {
      flag = 0;
    }
  }
  if (flag)
  {
    printf("\nEqual");
  }
  else
  {
    printf("Nah");
  }
}