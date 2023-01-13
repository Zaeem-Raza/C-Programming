#include <stdio.h>
void func(int num);
int main(){
 int x;
 printf("Enter a number");
 scanf("%d",&x);
 func(x);
}
void func(int num){
  if (num%2==0){
    printf("%d is even",num);
  }
  else{
    printf("%d is odd",num);
  }
}
