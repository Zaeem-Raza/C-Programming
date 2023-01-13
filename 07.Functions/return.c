#include <stdio.h>
int square(int x){
  printf("Enter a number");
  scanf("%d",&x);
  return x*x;
}
int main(){
 int y=square(2);
 printf("%d",y);
}
