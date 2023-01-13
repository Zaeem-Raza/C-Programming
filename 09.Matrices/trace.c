// the sum of diagonal of a matrix is called trace
#include <stdio.h>
#define SIZE 3
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
void trace(int arr[SIZE][SIZE])
{
    int sum = 0;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (row == col)
            {
                sum += arr[row][col];
            }
        }
    }
    printf("The trace of the matrix is %d", sum);
}
int main(){
  int A[SIZE][SIZE];
  getMatrix(A);
  printf("In matric form :\n");
  printMatrix(A);
    trace(A);
}