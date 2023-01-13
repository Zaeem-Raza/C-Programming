#include <stdio.h>
#define SIZE 5
int main(){
  int arr[SIZE];
  int sum=0;
  for(size_t i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("The sum of Array is :%d",sum);
}
