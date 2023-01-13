// Write a C program to input a number from user and count number of digits in the given integer using loop.
#include <stdio.h>
int main(void){

  int count=0;
  int num;
  printf("Enter integer");
  scanf("%d",&num);
  do{
    count++;
    num=num/10;

  }while(num!=0);
  printf("The total digits are:%d",count);
}
