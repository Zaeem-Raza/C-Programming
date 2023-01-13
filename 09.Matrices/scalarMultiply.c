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
void scalarMultiply(int arr[SIZE][SIZE], int scalar)
{
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            arr[row][col] *= scalar;
        }
    }
}
int main()
{
    int A[SIZE][SIZE];
   int scalar;
   getMatrix(A);
   printMatrix(A);
   printf("Enter a variables ");
   scanf("%d", &scalar);
    scalarMultiply(A, scalar);
    printMatrix(A);
}
