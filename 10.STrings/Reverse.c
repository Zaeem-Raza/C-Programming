#include <stdio.h>
#define SIZE 100
void reverse(char str[SIZE]){
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
int main(){
 char str[SIZE];
 printf("Enter string: ");
 gets(str);
reverse(str);
}