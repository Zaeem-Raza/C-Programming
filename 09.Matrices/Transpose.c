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
void Transpose(int arr[SIZE][SIZE])
{
    int temp;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = row + 1; col < SIZE; col++)
        {
            temp = arr[row][col];
            arr[row][col] = arr[col][row];
            arr[col][row] = temp;
        }
    }
}
int main(){
    
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    getMatrix(A);
    printMatrix(A);

   
    printf("Transpose of matrix is :\n");
    Transpose(A);
}