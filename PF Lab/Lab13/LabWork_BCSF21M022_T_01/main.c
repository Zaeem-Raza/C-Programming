#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *f1 = fopen("inputData.txt", "r");
    FILE *f2 = fopen("outputData.txt", "w");
    if (f1 == NULL)
    {
        printf("File not found");
        exit(1);
    }
    else
    {
        int row1;
        int col1;
        int row2;
        int col2;
        fscanf(f1, "%d %d\n", &row1, &col1);
        int mat1[row1][col1];

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                fscanf(f1, "%d ", &mat1[i][j]);
            }
        }

        fscanf(f1, "%d %d", &row2, &col2);

        int mat2[row2][col2];
        
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                fscanf(f1, "%d ", &mat2[i][j]);
            }
        }
        fclose(f1);
   
        int mat3[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mat3[i][j] = 0;
            }
        }
        // multiply the two matrices.
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        // print mat3

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                fprintf(f2, "%d ", mat3[i][j]);
            }
            fprintf(f2, "\n");
        }

        float mat4[row1][col1];
        for (int i = 0; i < row1; i++)
        {
            float sum = 0;
            for (int j = 0; j < col1; j++)
            {
                sum += mat1[i][j];
            }

            for (int j = 0; j < col2; j++)
            {
                float x = (mat1[i][j] / sum) * 255;
                mat4[i][j] = x;
            }
        }
     
        fprintf(f2, "\n"); // new line
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                fprintf(f2, "%.2f ", mat4[i][j]);
            }
            fprintf(f2, "\n");
        }
        fclose(f2);
        printf("Program Executed");
    }
    return 0;
}