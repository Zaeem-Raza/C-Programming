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
void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE])
{
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            C[row][col] = 0;
            for (int k = 0; k < SIZE; k++)   
        {  C[row][col] += A[row][k] * B[k][col];
            }
        }
    }
}
int main(){
  int A[SIZE][SIZE];
  int B[SIZE][SIZE];
  int C[SIZE][SIZE];
    getMatrix(A);
    getMatrix(B);
    printMatrix(A);
    printMatrix(B);
    multiplyMatrix(A, B, C);
    printMatrix(C);
    
} 