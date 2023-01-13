#include <stdio.h>
#define SIZE 5
void printArray(int arr[]);
void printrev(int arr[]);
int main()
{
    int arr[SIZE];
    printf("Enter elements of array\n");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
printf("The elements of array are:");
    printArray(arr);    // Pass array directly to function printArray

    printf("\nAfter reverse:");
    printrev(arr);
        printArray(arr); 
    return 0;
}

void printArray(int arr[])
{

    printf("Array elements are: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("\t%d", arr[i]);
    }
}
void printrev(int arr[]){
int temp;
  int p=SIZE-1;
    // reverse
    for(int i=0;i<SIZE/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
        p--;
    }
}
// another method
// void printrev(int arr[]){
// int temp;
// //   int p=SIZE-1;
//     // reverse
//     for(int i=0;i<SIZE/2;i++)
//     {
//         temp = arr[i];
//         arr[i]=arr[SIZE-1-i];
//         arr[SIZE-1-i]=temp;
//         // p--;
//     }
// }