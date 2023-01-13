#include <stdio.h>
int fact(int n);
int main(){
printf("%d",fact(2));
}

int fact(int n){
  int factorial=1;
  for(int i=1;i<=n;i++){
    factorial*=i;
  }
  return factorial;
}
