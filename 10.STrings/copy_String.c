#include <stdio.h>
#define SIZE 20
int main()
{
  char str[SIZE];
  printf("Enter a string: ");
  gets(str);
  printf("The string is: %s", str);
  char copy[SIZE];
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    copy[i] = str[i];
  }

  copy[i] = '\0';
  printf("\nThe copied string is :%s", copy);
  return 0;
}