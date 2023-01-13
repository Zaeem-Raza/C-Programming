#include <stdio.h>
#define SIZE 5
void getArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", (arr + i));
    }
}
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i /*integer */));
    }
}
void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    printf("\narray 1:\n ");
    getArray(arr1, SIZE);
    printf("\narray 2:\n ");
    getArray(arr2, SIZE);
    int *p1 = arr1;
    int *p2 = arr2;
    printf("\nArray 1: ");
    printArray(arr1, SIZE);
    printf("\nArray 2: ");
    printArray(arr2, SIZE);
    for (int j = 0; j < SIZE; j++)
    {
        Swap(p1, p2);
        p2++;
        p1++;
    }
    printf("\n\n\nAfter Swapping the arrays: \n\n\n");
    printf("\nArray 1: ");
    printArray(arr1, SIZE);
    printf("\nArray 2: ");
    printArray(arr2, SIZE);
}