#include <stdio.h>
#define SIZE 7
int main(){
  int arr[SIZE];
  printf("Enter the elements of array\n");
  for(int i =0;i<SIZE;i++){
    scanf("%d",&arr[i]);
  }
  printf("\nBefore Reverse:");
  for(int i=0;i<SIZE;i++){
    printf("\t%d",arr[i]);
  }
  for(int i=0;i<SIZE/2;i++){
    int temp=arr[i];
    arr[i]=arr[SIZE-1-i];
    arr[SIZE-1-i]=temp;
  }
  printf("\nAfter Reverse:");
  for(int i=0;i<SIZE;i++){
    printf("\t%d",arr[i]);
  }
}
