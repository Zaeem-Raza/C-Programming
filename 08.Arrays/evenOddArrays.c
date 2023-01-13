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
    int array[SIZE];
    int odd[SIZE];
    int even[SIZE];
    int oddIndex = 0;
    int evenIndex = 0;
    getArray(array);
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] % 2 == 0)
        {
            even[evenIndex] = array[i];
            evenIndex++;
        }
        else
        {
            odd[oddIndex] = array[i];
            oddIndex++;
        }
    }
    printf("Even array is: ");
    printArray(even);
    printf("Odd array is: ");
    printArray(odd);
    return 0;
}