#include <stdio.h>
int main(){
  int num;
int factorial=0;
int Ans=0;
int sum=0;
printf("Enter an integer");
scanf("%d",&num);
while(factorial<=num){
  Ans=factorial*num;
  sum=sum+Ans;
  factorial++;
}
printf("The factorial is %d",sum);
}
