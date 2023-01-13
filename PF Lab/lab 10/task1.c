#include <stdio.h>
int main(){
    
   int arr[5]={3,5,7,9,6};
    int *p=arr;
   for(int i=0;i<5;i++){
    printf("\nValue of arr[%d]=%d\t Address of arr[%d]: %d",i,*p,i,p);
    p++;
   }
 
   }