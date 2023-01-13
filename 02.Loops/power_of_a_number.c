#include <stdio.h>
int main(){
  int base ;
  int expo;
  long Answer=1;
  printf("Enter base:");
  scanf("%d",&base);
  while(base<0){
    printf("Wrong input\nEnter base:");
    scanf("%d",&base);
  }
  printf("Enter exponent:");
  scanf("%d",&expo);
  while(expo<0){
    printf("Wrong input\nEnter expo:");
    scanf("%d",&expo);
  }
  for(int i=1;i<=expo;i++){
  Answer=Answer*base;
  }
  printf("Tha answer is :%ld",Answer);
}
