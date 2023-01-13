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
int isIdentity(int arr[SIZE][SIZE])
{
    int flag = 1;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (row == col && arr[row][col] != 1)
            {
                flag = 0;
                break;
            }
            else if (row != col && arr[row][col] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int A[SIZE][SIZE];
    getMatrix(A);
    printMatrix(A);
    if (isIdentity(A))
    {
        printf("Identity");
    }
    else
    {
        printf("Not Identity");
    }
}