                              /*Get a character from user and check whther it is capital or not*/

#include <stdio.h>
int main(){
  char ch;
  printf("Enter a character :");
  scanf("%c",&ch);

  if((ch>=65)&&(ch<=90)){
    printf("Capital");
  }
  else if((ch>=97)&&(ch<=122)){
    printf("small");
  }
  else{
    printf("Wrong input");
  }

printf("\nHello World");
printf("\nHello World");

  return 0;
}
