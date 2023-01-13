#include <stdio.h>
#define SIZE 5
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i /*integer */));
    }
}
void getArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", (arr + i));
    }
}

int main(){
    int arr1[SIZE];
    int arr2[SIZE];
    int *p1=arr1;
    int *p2=arr2;
      
     
     
    getArray(arr1, SIZE);
    p1=arr1;
    p2=arr2;
    for(int j=0;j<SIZE;j++){
        *p2=*p1;
        p2++;
        p1++;
    }
    printf("\nArray 1: ");
    printArray(arr1,SIZE);
printf("\nArray 2: ");
   printArray(arr2,SIZE);
}