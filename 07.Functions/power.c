#include <stdio.h>
int power(int base,int expo);
int main(){
   printf("%d",power(2,5));
}
int power(int base,int expo){
  int Answer=1;
  for(int i=1;i<=expo;i++){
  Answer*=base;
  }
  return Answer;
}
