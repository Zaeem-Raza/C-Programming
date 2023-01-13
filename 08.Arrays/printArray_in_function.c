#include <stdio.h>
#define SIZE 5
void printArray(int arr[])
{

    printf("Array elements are: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("\t%d", arr[i]);
    }
}
void getArray(int arr[]){
    printf("Enter elements of array\n");
   for(int i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
   }
}

int main()
{
    int arr[SIZE];
    getArray(arr);
    printArray(arr);    

    return 0;
}
