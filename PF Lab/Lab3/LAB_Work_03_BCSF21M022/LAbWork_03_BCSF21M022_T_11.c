#include <stdio.h>
int main(){
  int num;
  printf("Enter a positive number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter again");
    scanf("%d",&num);
  }
  // printf("ok");

  // finding the reverse of this number
  int num2=0;

  int num3=num;
  while(num>0){
    num2=(num2*10)+(num%10);
    num=num/10;
  }
  // printf("Number in reverse is: %d\n",num2);
  //
  // // checking if it is pelindrome or not
  // if(num3==num2){
  //   printf("It is a Palindrome");
  // }
  // else{
  //   printf("No it is not a palindrome number\n");
  // }

int rev=num2;
int rem=0;
  while(rev>0){
    rem=rev%10;
    printf("%d\n",rem);
    rev=rev/10;
  }
}
