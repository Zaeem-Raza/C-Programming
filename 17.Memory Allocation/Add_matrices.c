#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int row1;
    int row2;
    int col1;
    int col2;

    printf("Enter the order of matrix 1 ; ");
    scanf("%d-%d", &row1, &col1);
    printf("Enter the order of matrix 2 : ");
    scanf("%d-%d", &row2, &col2);
    if (row1 != row1 || col1 != col2)
    {
        printf("Matrix addition not possible");
        exit(0);
    }

    int **p1;
    int **p2;
    int **p3;
    p1 = (int **)malloc(row1 * sizeof(int *));
    p2 = (int **)malloc(row2 * sizeof(int *));
    p3 = (int **)malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) // for matrix 1
    {
        *(p1 + i) = (int *)malloc(col1 * sizeof(int));
    }
    for (int i = 0; i < row2; i++) // for matrix 2
    {
        *(p2 + i) = (int *)malloc(col2 * sizeof(int));
    }
    for (int i = 0; i < row1; i++) // for matrix 3(sum)
    {
        *(p3 + i) = (int *)malloc(col2 * sizeof(int));
    }
    for (int i = 0; i < row1; i++) // input matrix 1
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(p1 + i) + j));
        }
    }
    printf("\n Enter Matrix 2\n");
    for (int i = 0; i < row2; i++) // input matrix 2
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(p2 + i) + j));
        }
    }
    printf("\nMatrix 1 is: \n");
    for (int i = 0; i < row1; i++) // print matrix 1
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", *(*(p1 + i) + j));
        }
        printf("\n");
    }
    printf("\nMatrix 2 is: \n");
    for (int i = 0; i < row2; i++) // print matrix 2
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", *(*(p2 + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            *(*(p3 + i) + j) = *(*(p1 + i) + j) + *(*(p2 + i) + j);
        }
    }
    printf("\nElements of Sum matrix are: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", *(*(p3 + i) + j));
        }
        printf("\n");
    }
    // free memory
    // free memory
    for (int i = 0; i < row1; i++)
    {
        free(*(p1 + i));
    }
    free(p1);
    for (int i = 0; i < row2; i++)
    {
        free(*(p2 + i));
    }
    free(p2);
    for (int i = 0; i < row1; i++)
    {
        free(*(p3 + i));
    }
    free(p3);
    return 0;
}