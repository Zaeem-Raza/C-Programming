#include <stdio.h>
int main(){
  int x;
  int y;
  printf("Enter first Integer");
  scanf("%d",&x);
  printf("Enter second Integer");
  scanf("%d",&y);
  if(x%y==0){
    printf("%d is a multiple of %d",x,y );
  }
  else{
    printf("It is not a multiple" );
  }

}
