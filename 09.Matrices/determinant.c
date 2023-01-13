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
int determinant(int A[SIZE][SIZE]){
    if (SIZE == 2)
    {
        // finding determinant;
        int det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
        // printf("\nThe determinant of above matrix is :%d", det);
    }

    else if (SIZE == 3)
    {
        // finding determinant;
        int det = (A[0][0] * ((A[1][1] * A[2][2]) - (A[1][2] * A[2][1]))) - (A[0][1] * ((A[1][0] * A[2][2]) - (A[1][2] * A[2][0]))) + (A[0][2] * ((A[1][0] * A[2][1]) - (A[1][1] * A[2][0])));
        // printf("\nThe determinant of above matrix is :%d", det);
    }
    else
    {
        printf("I cannot calculate :/");
    }
}
int main(){
    int A[SIZE][SIZE];
    getMatrix(A);
    printMatrix(A);
    int det=determinant(A);
    printf("Determinant of matrix is :%d",det);

   }
   
