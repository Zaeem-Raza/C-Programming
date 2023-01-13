#include <stdio.h>
#define SIZE 10
int main(){
  int num[SIZE];
  int sum=0;
  for(int i=0;i<SIZE;i++){
    scanf("%d",&num[i]);
    if(num[i]%2==0){
      sum+=num[i];
    }
  }
  printf("The sum is :%d",sum);
}
