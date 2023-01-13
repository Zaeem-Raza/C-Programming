#include <stdio.h>
int main(){
  int size;
  printf("Enter the size of array");
  scanf("%d",&size);
  while(size<5){
    printf("SIze must be greater than 5\nEnter again");
    scanf("%d",&size);
  }
  int arr[size];

printf("Enter the elements of array");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  int min=arr[0];
  int max=arr[0];

  // finding the minimum and maximum value
  for(int i=0;i<size;i++){
    if(arr[i]<min){
      min=arr[i];
    }
    if(arr[i]>max){
      max=arr[i];
    }
  }

  printf("Min Element :%d\n",min);
  printf("Max Element :%d",max);
}
