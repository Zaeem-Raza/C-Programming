#include <stdio.h>
#define SIZE 5
int main(){
  int arr[SIZE];
  printf("Enter the elemenmts of array\n");
  for(int i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
  }
  printf("Array Elements are:\n");
  for(int i=0;i<SIZE;i++){
    printf("%d\t",arr[i]);
  }
}