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


    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
void interchange(int mat[SIZE][SIZE]){
    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
           if(row==col){
            int temp=mat[row][col];
            mat[row][col]=mat[row][SIZE-row-1];
            mat[row][SIZE-row-1]=temp;
           }

        }

    }
    printMatrix(mat);
}
int main(){

    int mat[SIZE][SIZE];

    getMatrix(mat);
    printf("Matrix before interchanging:\n");
    printMatrix(mat);

    printf("After interchange :\n");
    interchange(mat);
}
