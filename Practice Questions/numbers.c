/*This program gets two integers from user and prints all the numbers between those two numbers*/
#include <stdio.h>
int main(){
  int first_num;
  int second_num;
  printf("Enter the first number:  \b\b");
  scanf("%d",&first_num);
  printf("Enter the second number:  \b\b");
  scanf("%d",&second_num);
first_num++;
 while(first_num<second_num){
   printf("%d\n",first_num);
   first_num++;
 }
}
