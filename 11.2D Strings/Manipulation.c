#include <stdio.h>
#define SIZE 50
void getStr(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    printf("Enter name #%d: ",i+1);
    gets(str[i]);
  }
}
void printStr(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    printf("Name #%d:",i+1);
    printf("%s",str[i]);
    printf("\n");
  }
}
void reverse(char str[SIZE])
{
  int len = 0;
  int i = 0;
  char rev[SIZE];
  while (str[i] != '\0')
  {
    i++;
  }
  // length
  len = i;
  int a = 0;
  int b = len - 1;
  while (b >= 0)
  {
    rev[a] = str[b];
    b--;
    a++;
  }
  rev[a] = '\0';
  printf("Reverse: %s", rev);
}
void reverseStr(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    printf("Reverse of name #%d: ",i+1);
    reverse(str[i]);
    printf("\n");
  }
}
void Title(char str[SIZE])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i - 1] != 32)
            {
                str[i] += 32;
            }
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == 32)
            {
                str[i] -= 32;
            }
        }
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
    }
    printf("%s", str);
}
void TitleCase(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    Title(str[i]);
    printf("\n");
  }
}
void highest(char str[SIZE])
{
  int max = 0;
  char index;
  for (int i = 0; str[i] != '\0'; i++)
  {
    int count = 0;
    for (int j = i; str[j] != '\0'; j++)
    {
      if (str[j] == str[i])
      {
        count++;
        if (count > max)
        {
          index = str[i];
          max = count;
        }
      }
    }
  }
  printf("Max occured : %c  %dtimes ", index, max);
}
void PrintHighest(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    highest(str[i]);
    printf("\n");
  }
}
int length(char A[])
{
  int len = 0;
  while (A[len] != '\0')
  {
    len++;
  }
  return len;
}
void printLength(char str[3][SIZE])
{
  for(int i=0;i<3;i++)
  {
    printf("Length of name #%d: ",i+1);
    printf("%d",length(str[i]));
    printf("\n");
  }
}
int main(){
    char str[3][SIZE];
    getStr(str);
    printStr(str);
    // printf("Title case string: ");
    // TitleCase(str);
    // printf("Reverse string: ");
    // reverseStr(str);
    // printf("Highest occured: ");
    // PrintHighest(str);
    // printLength(str);

}