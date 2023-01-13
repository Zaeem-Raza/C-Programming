/*Write a C program to input number from user and find sum of all even numbers between 1 to n.
How to find sum of even numbers in a given
 range using loop in C programming. Logic to find sum of even numbers in a given range in C program.*/
#include <stdio.h>
int main(){
  int Sum=0;
  int n;
  printf("Enter integer:");
  scanf("%d",&n);
  int i=0;
  while(i<=n){
      Sum=Sum+i;
      i+=2;
  }
      printf("The sum is %d",Sum);

}
