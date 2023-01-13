                                  /*Factorial of a number*/
#include <stdio.h>
int main(){
  int num;
  int fact=1;
int i=1;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input");
    printf("\nEnter again");
    scanf("%d",&num);
  }
  while(num>16){
    printf("Sorry! int cannot print factorial of integer greater than 16 :/\nEnter again");
    scanf("%d",&num);
  }
 while(i<=num){
   fact=fact*i;
   i++;
 }
 printf("The factorial of %d is %d",num,fact);

}
