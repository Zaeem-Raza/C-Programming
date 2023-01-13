#include <stdio.h>
int main(){
    char str[100]="Hello World";
 char *p=str;
 int len=0;
   while(*p!='\0'){
  len++;
  p++;
   }

   printf("The length of the string is %d",len);
    return 0;
}