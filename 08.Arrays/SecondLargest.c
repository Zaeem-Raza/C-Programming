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
    printArray(arr);
    int largest = arr[0];
    int sec = arr[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > largest)
        {
            sec = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec && arr[i] < largest)
        {
            largest = arr[i];
        }
    }
    printf("\n Largest :%d  Second Largest: %d", largest, sec);
}