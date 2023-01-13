#include <stdio.h>
#define SIZE 100
int palindrome(char str[SIZE]){
   int len = 0;
   while (str[len] != '\0')
   {
      len++;
   }
   int st = 0;
   int flag = 1;
   int end = len - 1;
   while (st <= end)
   {
      if (str[st] != str[end])
      {
        return 0;
      }
      st++;
      end--;
   }
   return 1;
}
int main()
{
  char str[SIZE];
  printf("Enter string :");
  gets(str);
  palindrome(str);
   if (palindrome(str))
   {
      printf("String is palindrome");
   }
   else
   {
      printf("String is not palindrome");
   }

}