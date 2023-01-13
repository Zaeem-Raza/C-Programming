#include <stdio.h>
#define SIZE 10
void printArray(int arr[])
{

    printf("\nArray elements are: ");
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
    int freq[SIZE] = {0};
    // printArray(freq)

    for (int i = 0; i < SIZE; i++)
    {
        ++freq[arr[i]];
    }
    // printing the frequency
    printf("\nThe frequency of array is:\n");
    printf("Element\t\t Frequency");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n%d\t\t%d", i, freq[i]);
    }
}