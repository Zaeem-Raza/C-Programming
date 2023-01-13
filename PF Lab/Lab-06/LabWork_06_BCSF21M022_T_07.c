#include <stdio.h>
int main(){
  int size;
  printf("Enter the size of array");
  scanf("%d",&size);
  while(size<0){
    printf("SIze must be greater than 0\nEnter again");
    scanf("%d",&size);
  }
  int arr[size];
  printf("Enter the elements of array\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  //printing Array
  printf("Array Elements:\t");
  for(int i=0;i<size;i++){
   printf("%d\t",arr[i]);
  }

  printf("\nNegative Elements:");
  for(int i=0;i<size;i++){
    if(arr[i]<0){
      printf("\t%d",arr[i]);
    }
  }

  printf("\nPositive Elements:");
  for(int i=0;i<size;i++){
    if(arr[i]>0){
      printf("\t%d",arr[i]);
    }
  }
}
