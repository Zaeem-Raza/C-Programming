#include <stdio.h>
int fact(int n);
int main(){
  int num;
printf("Enter a number");
scanf("%d",&num);
int factorial=fact(num);
printf("%d! =%d",num,factorial);
}
int fact(int n){
if(n==1){
  return 1;
}
else{
  return n*fact(n-1);
}
}
