/**
 * write a program to print a matrix of size n-by-m in a text file
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int row;
    int col;
    printf("Enter the size of matrix: ");
    scanf("%d-%d", &row, &col);
    while (row < 1 || col < 1)
    {
        printf("Invalid Input\nEnter again");
        scanf("%d-%d", &row, &col);
    }

    int **p;
    p = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        *(p + i) = (int *)malloc(col * sizeof(int));
    }
    //Input Matrix
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter the matrix Element: [%d][%d]",i+1,j+1);
        scanf("%d",(*(p+i)+j));
    }
}
printf("The matrix is : \n");
  FILE *f=fopen("matrix.txt","w");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%3d ",*(*(p+i)+j));
      fprintf(f, "%3d ", *(*(p + i) + j));
   }
   printf("\n");
   fprintf(f,"\n");
}
    return 0;
}