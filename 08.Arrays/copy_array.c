#include <stdio.h>
#define SIZE 5
int main(){
  int arr1[SIZE];
  int arr2[SIZE];
  for(int i=0;i<SIZE;i++){
    scanf("%d",&arr1[i]);
    arr2[i]=arr1[i];
  }
  printf("Array 1\n");
  for(int i=0;i<SIZE;i++){
    printf("%d\t",arr1[i]);
  }
  printf("\narray 2\n");
  for(int i=0;i<SIZE;i++){
    printf("%d\t",arr2[i]);
  }
}
