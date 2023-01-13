/*This program prints all alphabets in order*/
#include <stdio.h>
int main()
{
  char alpha;
  printf("Enter alphabet");
  scanf("%c", &alpha);

  while (alpha <= 'z')
  {
    printf("%c\n", alpha);
    alpha++;
  }
}
