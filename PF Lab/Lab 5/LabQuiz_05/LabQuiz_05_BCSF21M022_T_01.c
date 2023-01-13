#include <stdio.h>
int cube(int x);
int isArmstrong(int y);


int main(){
int num;
  printf("Enter a number");
  scanf("%d",&num);
while(num<100||num>999){
  printf("Wrong input\nEnter Again");
  scanf("%d",&num);
}
int arm=isArmstrong(num);
if(arm==1){
  printf("The number is Armstrong");
}
else{
  printf("The number is not Armstrong");
}
}


int cube(int x){
  return x*x*x;
}
int isArmstrong(int y){
  int clone1=y;
  int clone2=y;
  int sum=0;
  while(clone1!=0){
    int rem=clone1%10;
    sum=sum+cube(rem);
    clone1/=10;
  }
  if(sum==y){
    return 1;
  }
  else{
    return 0;
  }
}
