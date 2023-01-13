#include <stdio.h>
#define SIZE 2
void getMat(int mat[][SIZE], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter the value of %d,%d element: ", i + 1, j + 1);
            scanf("%d", (*(mat + i) + j));
        }
    }
}
void printMat(int mat[][SIZE], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void MultiplyMat(int mat1[][SIZE],int mat2[][SIZE],int mat3[][SIZE]){
    int i, j;
    for (i = 0; i < SIZE; i++)   //R1
    {
        for (j = 0; j < SIZE; j++)   //C2
        {
            *(*(mat3 + i) + j)=0;
            for(int k=0;k<SIZE;k++){   //C1
                *(*(mat3 + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }

        }
    }
    printMat(mat3,SIZE,SIZE);
}
int main(){
 int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int mat3[SIZE][SIZE];
    printf("Enter the elements of the first matrix: ");
    getMat(mat1,SIZE,SIZE);
    printf("Enter the elements of the second matrix: ");
    getMat(mat2,SIZE,SIZE);
    printf("\nmatrix A:\n");
    printMat(mat1,SIZE,SIZE);
    printf("\nmatrix B:\n");
    printMat(mat2,SIZE,SIZE);
    printf("\nmatrix C:\n");
     MultiplyMat(mat1,mat2,mat3);
}