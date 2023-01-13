#include <stdio.h>
int main(){
  int size;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  while(size<5){
    printf("SIze must be greater than 5\nEnter again");
    scanf("%d",&size);
  }
  int arrfirst[size];
  int arrSecond[size];
  printf("Enter the elements of array\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arrfirst[i]);
     arrSecond[i]=arrfirst[i];
  }
printf("Original Array Elements:");
  for(int j=0;j<size;j++){
    printf("%d\t",arrfirst[j]);
  }

  printf("\nCopy of Array:");
  for(int k=0;k<size;k++){
    printf("\t%d",arrSecond[k]);
  }
}
