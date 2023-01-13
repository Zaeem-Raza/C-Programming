#include <stdio.h>
#include <stdlib.h>
#define size 6
int main()
{
    int num,temp;
    int arr[size];
    printf("Enter elements of the array: \n");
    for(int i = 0; i<size;i++)
    {
        scanf("%d", &num);
        arr[i]=num;
    }
    printf("Array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int p=size-1;
    // reverse
    for(int i=0;i<size/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
        p--;
    }
    printf("Reverse array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
