                                /*Get two integers from user and output the product without using multiplication operator*/

#include <stdio.h>
int main(){
int num1;
int num2;
printf("Enter first integer");
scanf("%d",&num1);
printf("Enter second integer");
scanf("%d",&num2);
while(num1<0||num2<0){
  printf("Sorry I cannot add negative numbers\n Enter again");
  scanf("%d",&num1);
}

// multiplication
int Ans=0;
for(int i=0;i<num1;i++){
  Ans=Ans+num2;
}
printf("The product is :%d",Ans);

}
