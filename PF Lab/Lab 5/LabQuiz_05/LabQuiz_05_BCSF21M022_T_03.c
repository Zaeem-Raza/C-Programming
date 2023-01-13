#include <stdio.h>
float futureValue(int b,int c,int d);
int main(){
  float present;
  float interest;
  float months;
  float Final=0;
  printf("Enter the present value");
  scanf("%f",&present);
  printf("Enter the interest rate");
  scanf("%f",&interest);
  printf("Enter the number of months");
  scanf("%f",&months);
  Final=futureValue(present,interest,months);
  printf("The Final Value of Account is %.2f",Final);
}
float futureValue(int b,int c,int d){
  return b*(1+c)*d;
}
