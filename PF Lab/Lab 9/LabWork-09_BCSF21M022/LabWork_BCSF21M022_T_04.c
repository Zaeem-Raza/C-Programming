#include <stdio.h>
#include <string.h>
#define SIZE 100
void sort(char str[5][SIZE]);
#define strings 5
int main()
{
  char str[5][SIZE];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter string %d:", i + 1);
    gets(str[i]);
  }
  printf("Original Array: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%s ",str[i]);
  }

  sort(str);
}
void sort(char str[5][SIZE])
{
  char temp[SIZE];
  for (int i = 0; i < strings; i++)
  {
    for (int j = i + 1; j < strings; j++)
    {
      if (strcmp(str[i], str[j]) > 0)
      {
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }
  printf("\nSorted Array :");
  for (int i = 0; i < strings; i++)
  {
    printf("%s ", str[i]);
  }
}
