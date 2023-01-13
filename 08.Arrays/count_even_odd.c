#include <stdio.h>
#define SIZE 5
int main(){
  int num[SIZE];
  int evens=0;
  int odds=0;
  for(int i=0;i<SIZE;i++){
    scanf("%d",&num[i]);
    if(num[i]%2==0){
      evens++;
    }
    else{
      odds++;
    }
  }
  printf("Odds :%d Evens: %d",odds,evens);
}
