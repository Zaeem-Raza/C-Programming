#include <stdio.h>
#include <stdlib.h>
int main(){
  int numbers[4]={1,2,3,4};
  int x=sizeof(numbers)/sizeof(int);
  for(int i=0;i<x;i++){
    printf("%d\n",numbers[i]);
  }
}
