#include <stdio.h>
#define SIZE 5
int main(){
  int arr[SIZE]={1,2,3,4,5};
  printf("Index\tValue\n");
  for(int i=0;i<SIZE;i++){
    printf("%d\t%d\t",i,arr[i]);
    for(int j=0;j<arr[i];j++){
      printf("*");
    }
    printf("\n");
  }
}
