// #include <stdio.h>
// #define SIZE 5
// void printArray(int arr[])
// {

//     printf("\nArray elements are: ");
//     for (int i = 0; i < SIZE; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
// }
// void getArray(int arr[])
// {
//     printf("Enter elements of array\n");
//     for (int i = 0; i < SIZE; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
// }
// int main()
// {
//     int arr[SIZE];
//     getArray(arr);
//     printArray(arr);
//     int freq[SIZE] = {0};
//     // printArray(freq)

//     for (int i = 0; i < SIZE; i++)
//     {
//         ++freq[arr[i]];
//     }
//     // printing the frequency
//     printf("\nThe frequency of array is:\n");
//     printf("Element\t\t Frequency");
//     for (int i = 1; i < SIZE; i++)
//     {
//         printf("\n%d\t\t%d", i, freq[i]);
//     }
//     printf("\nThe unique Elements are:");
//     for (int i = 1; i < SIZE; i++)
//     {
//         if (freq[i] == 1)
//         {
//             printf("%d\t", arr[i]);
//         }
//     }
// }

// * 2nd method
#include <stdio.h>
#include <stdlib.h>
int uniqueEle(int array[], int n)
{
    int i, j;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j] && i != j) // if the element is repeated then break the loop
                break;
        }
        if (j == n)
        { // if the element is not repeated then print the element
            printf("unique elements in an array is [%d] : %d", count, array[i]);
            ++count;
        }
    }
    return -1;
}
int main()
{
    int n, i;
    printf("Enter no: of elements : ");
    scanf("%d", &n);
    int array[n];
    printf("enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    uniqueEle(array, n);
    return 0;
}
