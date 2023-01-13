#include <stdio.h>
int main(){
  int num;
  printf("Enter a positive integer");
  scanf("%d",&num);

while(num<0){
  printf("Wrong Input\n");
  printf("Enter a positive integer");
  scanf("%d",&num);
}

// this will give us the last digit
   int last_digit=0;
   last_digit=num%10;



// this will give us the first digit
   while(num>10){
     num=num/10;

   }
   int first_digit=num;
   printf("The first digit is:%d\n",first_digit);
      printf("The last digit is:%d\n\n",last_digit);
   int product=0;
   product=first_digit*last_digit;
   printf("The product is %d:",product);
}
