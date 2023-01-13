#include <stdio.h>
#define SIZE 100
int length(char A[])
{
  int len = 0;
  while (A[len] != '\0')
  {
    len++;
  }
  return len;
}
int main(){
  char str[SIZE];
  printf("Enter a string");
  gets(str);
  char x;
  printf("Enter a letter to find ");
  scanf(" %c",&x);
  int len=length(str);
  for(int i=0;str[i]!='\0';i++){
        if(str[i]==x){
          printf("Letter is found at position %d",i+1);
          break;
        }
  }
}