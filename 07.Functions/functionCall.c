
#include<stdio.h>

char getcharacter(){
  char character;
  printf("Enter the character\n");
  scanf("%c", &character);
  return character;
}

int toASCII(/*char character*/){
  return getcharacter();
}

void main(){
  printf("ASCII is: %d\n", toASCII(/*getcharacter()*/));
}
