/* This program adds the integers given by the user until the user enters 0 */

#include <stdio.h>
int main(){
  double user_input;
  double sum=0;
  do{
  printf("Enter the integer");
  scanf("%lf",&user_input);
  sum=sum+user_input;
}while(user_input!=0);

printf("Sum is %lf",sum);
}
