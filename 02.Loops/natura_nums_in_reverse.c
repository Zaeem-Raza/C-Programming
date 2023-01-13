/*This program prints  natural numbers in reverse*/
#include <stdio.h>
int main(){
  int num;
  printf("Enter integer");
  scanf("%d",&num);
  while(num!=0){
    printf("%d\n",num);
    num--;
  }
}
