#include <stdio.h>
int isPrime(int);
int main(){
printf("%d",isPrime(6));
}
int isPrime(int x){
  for(int i=2;i<=x/2;i++){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}
