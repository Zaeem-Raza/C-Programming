#include<stdio.h>
int main(){
  int num;
  int first_digit=0;
  int last_digit=0;
  printf("Enter a number");
  scanf("%d",&num);
  while(num<0){
    printf("Wrong input\nEnter a number");
    scanf("%d",&num);
  }

  // last digit
  last_digit=num%10;

  // first digit
  first_digit=num;
  while(first_digit>=10){
    first_digit=first_digit/10;

  }

printf("first digit is %d\n",first_digit);
printf("Last digit is :%d\n",last_digit);
printf("Sum is %d+%d=%d:",first_digit,last_digit,first_digit+last_digit);
}
