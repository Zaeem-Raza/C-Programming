#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    int *p=arr;
    for(int i=0;i<size;i++){
        printf("Enter element :%d  ",i+1);
        scanf("%d",p);
        p++;
    }
      p=arr;
   printf("Array is : \n");
   for (int i = 0; i < size; i++)
   {
       printf("\nelement :%d  ", i + 1);
       printf("%d",*p);
       p++;
   }
}

