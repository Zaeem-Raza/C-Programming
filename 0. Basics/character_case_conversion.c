                            /*This program takes a character from user and inverts its case*/
#include <stdio.h>
int main(){
  char ch;
  printf("Enter a character");
  scanf(" %c",&ch);

  while(!((ch>=65&&ch<=90)||(ch>=97&&ch<=122))){
    printf("it is not a character\n Enter again");
    scanf(" %c",&ch);
  }

  if(ch>=65&&ch<=90){
    ch=ch+32;
  }
  else {
    ch=ch-32;
  }
  printf("character after case conversion is %c",ch);
}
