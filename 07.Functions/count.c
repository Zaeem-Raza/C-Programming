#include <stdio.h>
int count(int x);
int main(){
printf("%d",count(34543));
}
int count(int x){
  int y=0;
  while(x!=0){
    x/=10;
    y++;
  }
  return y;
}
