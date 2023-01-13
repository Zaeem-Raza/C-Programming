#include <stdio.h>
int *find_mid(int A[], int l);
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int l = (sizeof(arr) / sizeof(arr[0]));
    // printf("%d",l);
    int *mid = find_mid(arr, l);
    printf("%d", *mid);
}


int *find_mid(int A[], int l)
{
    return &A[l / 2];
}