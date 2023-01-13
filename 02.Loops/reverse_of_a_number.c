#include <stdio.h>
int main(){
  int num;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter a number");
    scanf("%d",&num);
  }
  int temp=num;
int reverse=0;
    while(temp>0){
     reverse=(reverse*10)+(temp%10);
     temp/=10;
    }
    printf("The reverse is:%d",reverse);
}
