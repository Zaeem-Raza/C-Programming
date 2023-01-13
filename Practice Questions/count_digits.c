/*Write a C program to input a number from user and count number of digits in the given integer using loop.
How to find total digits in a given integer using loop in C programming.
Logic to count digits in a given integer without using loop in C program.*/
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
