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
        printf("\nEnter the value of %d element: ", i + 1);
        scanf("%d", (arr + i));
    }
}
void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void reverse(int *arr, int size)
{

    int *p1 = arr;
    int *p2 = arr + size - 1;
    for (int j = 0; j < size / 2; j++)
    {
        Swap(p1, p2);
        p2--;
        p1++;
    }
}
int main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    getArray(arr, size);
    printf("Array before reversing: ");
    printArray(arr, size);
    printf("\nArray after reverse: ");
    reverse(arr, size);
    printArray(arr, size);
}