#include <stdio.h>
#define SIZE 4
void printArray(int *arr, int size);
int main()
{
    int arr[SIZE];
    int *p=arr;
    // no need to use & bcz the first index is the address of the array
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", p);
        p++;
    }
    p = arr;
    printArray(arr,SIZE);

}
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i /*integer */));
    }
}
