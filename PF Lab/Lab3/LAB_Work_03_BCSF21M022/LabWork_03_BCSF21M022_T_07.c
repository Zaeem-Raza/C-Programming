#include <stdio.h>
int main(){
  int num;
  int wrongs=0;
  printf("enter a positive integer");
  scanf("%d",&num);
 while(num!=0){
   if(num<0){
     printf("Wrong Attempt! You have entered a negative number\nEnter again");
     wrongs++;

   }
   printf("Enter a positive Integer");
   scanf("%d",&num);
 }
 printf("The wrong attempts are %d",wrongs);
}
