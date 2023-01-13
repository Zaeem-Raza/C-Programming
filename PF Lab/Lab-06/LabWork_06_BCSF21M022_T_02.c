#include <stdio.h>
int main(){
  int size;
  printf("Enter the size of array");
  scanf("%d",&size);
  while(size<0){
    printf("Invalid Input\nEnter the size of array");
    scanf("%d",&size);
  }
  int array[size];
  int sum=0;
printf("Enter the elements of array");
  for(int i=0;i<size;i++){
     scanf("%d",&array[i]);
     sum+=array[i];
  }

  printf("The elements of array:");
    for(int i=0;i<size;i++){
       printf("\t%d",array[i]);
    }
  printf("\nThe sum of this array is :%d",sum);
}
