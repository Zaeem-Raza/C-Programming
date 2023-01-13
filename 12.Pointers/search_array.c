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
void findkey(int *arr, int size, int key)
{
    int *p = arr;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (*p == key)
        {
            index = i + 1;
            break;
        }
        p++;
    }
    if (index == 0)
    {
        printf("The integer is not found");
    }
    else
    {
        printf("The integere is found at position %d", index);
    }
}
void find(int *arr, int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (*(arr + i) == key) //*(arr+i) is same as arr[i]

        {
            printf("The element %d is found at %d position", key, i + 1);
            break;
        }
    }
    if (i == size)
    {
        printf("The element %d is not found", key);
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
    printf("The array is: ");
    printArray(arr, size);
    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    find(arr, size, x);
}