#include <stdio.h>
#define SIZE 2
void getMatrix(int arr[SIZE][SIZE])
{
    printf("Enter the elements of matrix :");
    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
}
void printMatrix(int arr[SIZE][SIZE])
{
    printf("In matrix form :\n");

    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
void areEqual(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int flag = 1;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (A[row][col] != B[row][col])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("The matrices are equal");
    }
    else
    {
        printf("The matrices are not equal");
    }
}
int main()
{
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];

    getMatrix(A);
    getMatrix(B);
    printMatrix(A);
    printMatrix(B);

    areEqual(A, B);
    
}