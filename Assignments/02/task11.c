/*
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   11

Write a C program using pointers in which:
• Takes two matrices as an input from the user.
• Make a function named “multiplyMatrices” that multiply two matrices.
• Display the resultant matrix.
*/

#include <stdio.h>

#define ROW 3
#define COL 3
void getMatrix(int mat[][COL]);
void printMatrix(int mat[][COL]);
void multiplyMatrices(int mat1[][COL], int mat2[][COL], int mat3[][COL]);
int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int mat3[ROW][COL];
    printf("Enter the elements of matrix 1: ");
    getMatrix(mat1);
    printf("Enter the elements of matrix 2: ");
    getMatrix(mat2);
    printf("Matrix 1 is: \n");
    printMatrix(mat1);
    printf("Matrix 2 is: \n");
    printMatrix(mat2);
    multiplyMatrices(mat1, mat2, mat3); // function call
    printf("The product of the two matrices is: \n");
    printMatrix(mat3);
}

void getMatrix(int mat[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
}
void printMatrix(int mat[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%3d", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void multiplyMatrices(int mat1[][COL], int mat2[][COL], int mat3[][COL])
{

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(mat3 + i) + j) = 0; // initializing the matrix to 0
            for (int k = 0; k < COL; k++)
            {
                *(*(mat3 + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j); // multiplying the matrices
            }
        }
    }
}
