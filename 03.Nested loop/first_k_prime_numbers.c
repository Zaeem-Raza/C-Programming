/*1st k prime numbers*/

#include <stdio.h>
int main(){
  int num;
  int x=1;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<1){
    printf("Error\nEnter a number");
    scanf("%d",&num);
  }
int count=1;
 printf("the first %d prime numbers are: ",num);
 while(count<=num){
   int flag=0;
            for(int i=2;i<=x/2;i++){
                 if(x%i==0){
                   flag=1;
                 }
            }
            if(flag==0){
              printf("%d\t",x);
              count++;
            }
   x++;
 }

}
