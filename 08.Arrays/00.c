#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void)
{
    // int arr[SIZE];
    // printf("%d",arr[0]);      // garbage value

    // int arr[5]={1,2,3,4,5};
    // printf("%d",arr[5]);      // garbage value

    // int arr[SIZE]={1,2,3,6,4,2,5,7};   // cannot initialize more than the size of array
    // printf("%d",sizeof(arr));   // 20
    // printf("%d",arr[5]);        // garbage value

    // int arr[SIZE]={0};
    // for(int i=0;i<SIZE;i++){
    //     printf("%d ",arr[i]);   // 0 0 0 0 0
    // }
    // printf("\n");

    // int arr[SIZE]={1,2,3};
    // for(int i=0;i<SIZE;i++){
    //     printf("%d ",arr[i]);   // 1 2 3 0 0
    // }

    // int arr[SIZE]={};
    // for(int i=0;i<SIZE;i++){
    //     printf("%d ",arr[i]);   // 0 0 0 0 0
    // }

    // int arr[SIZE]={1,2,3,4,5};
    // int *ptr=arr;
    // for(int i=0;i<SIZE;i++){
    //     printf("%d ",i[ptr]);   // 1 2 3 4 5
    // }

    // int arr[SIZE] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // for (int i = 0; i < SIZE; i++)
    // {
    //     printf("%d ", *(ptr + i)); // 1 2 3 4 5
    // }

    return 0;
}