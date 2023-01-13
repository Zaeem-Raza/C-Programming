/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   09

Statement:     Write a C program to input and print elements of two - dimension array using pointers.
*/

#include <stdio.h>
#define ROW 3
#define COL 3
int main(){
   int mat[ROW][COL];
    int *p=mat;
    printf("Enter the elements of matrix: ");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", p);
            p++;
        }
    }
    p=mat;
    printf("The matrix is: \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%3d ",*p);   //%3d means 3 spaces
            p++;
        }
        printf("\n");
    }
}
