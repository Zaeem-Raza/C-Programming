#include <stdio.h>
#define SIZE 10
void printArray(int arr[])
{

    printf("Array elements are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\t%d", arr[i]);
    }
}
void getArray(int arr[])
{
    printf("Enter elements of array\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int arr[SIZE];
    getArray(arr);
    printf("Before sorting\n");
    printArray(arr);

    // selection sort
    for (int i = 0; i < SIZE; i++)
    {

        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    printArray(arr);
}
