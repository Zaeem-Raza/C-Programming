#include <stdio.h>
void max(int num1,int num2);
void min(int num1,int num2);
int main(){
int num1,num2;
printf("Enter two number");
scanf("%d, %d",&num1,&num2);
max(num1,num2);
min(num1,num2);
}
void max(int num1,int num2){
  if(num1>num2){
    printf("%d is maximum ",num1);
  }
  else{
    printf("%d is maximum ",num2);
  }
}
void min(int num1,int num2){
  if(num1<num2){
    printf("%d is minimum ",num1);
  }
  else{
    printf("%d is minimum ",num2);
  }
}
