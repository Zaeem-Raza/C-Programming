#include <stdio.h>
int main(){
  int num;
  printf("Enter number");
  scanf("%d",&num);
  int lower;

  printf("Enter Lower number");
  scanf("%d",&lower);
  int upper;
  printf("Enter upper limit");
  scanf("%d",&upper);
  int multiple=0;
  while(lower<=upper){
    if(lower%num==0){
      multiple=multiple+1;
    }
    lower++;
  }
  printf("Total multiples are  %d ",multiple);
}
