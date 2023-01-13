#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<0){
    printf("Input error\nEnter again");
    scanf("%d",&num);
  }

int rem=0;
int Ans=1;
  while(num>0){
    rem=num%10;
Ans=rem*Ans;
  num=num/10;
  }
  printf("The product is %d:",Ans);
}
