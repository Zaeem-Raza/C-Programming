#include <stdio.h>
int sum(int n);
int main(){
  int num;
printf("Enter a number");
scanf("%d",&num);
int Answer=sum(num);
printf("The Sum of %d natural numbers is %d",num,Answer);
}
int sum(int n){
  if(n==1){
    return 1;
  }
  else{
    return n+sum(n-1);
  }
}
