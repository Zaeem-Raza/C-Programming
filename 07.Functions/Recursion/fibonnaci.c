#include <stdio.h>
int fib(int n);
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
int fibonacci=fib(num);
printf("The fibonacci %dth term is %d",num,fibonacci);
}
int fib(int n){
  if(n==0||n==1){
    return n;
}
  else{
    return fib(n-1)+fib(n-2);
  }
}
