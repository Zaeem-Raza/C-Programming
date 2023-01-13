#include <stdio.h>
#define SIZE 10
int main(){
  int num[SIZE];
  int sum=0;
  for(int i=0;i<SIZE;i+=2){
    scanf("%d",&num[i]);
    sum+=num[i];
  }
  printf("The sum is :%d",sum);
}
