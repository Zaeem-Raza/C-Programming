#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int row;
    int col;
    printf("Enter the order of matrix: ");
    scanf("%d-%d",&row,&col);
    if(row!=col){
        printf("Determinant is not Possible ");
        exit(1);
    }
    int **p;
    p=(int **)malloc(row*sizeof(int));

    for (int i = 0; i < row; i++) // for matrix 1
    {
        *(p + i) = (int *)malloc(col * sizeof(int));
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d",(*(p+i)+j));
        }
    }
    int determinant=0;
    if(row==2){
        determinant=(*(*(p+0)+0)*(*(*(p+1)+1)))-(*(*(p+0)+1)*(*(*(p+1)+0)));
    }
    else{
    determinant=(*(*(p+0)+0)*(*(*(p+1)+1)*(*(*(p+2)+2))-(*(*(p+1)+2)*(*(*(p+2)+1)))))-(*(*(p+0)+1)*(*(*(p+1)+0)*(*(*(p+2)+2))-(*(*(p+1)+2)*(*(*(p+2)+0)))))+(*(*(p+0)+2)*(*(*(p+1)+0)*(*(*(p+2)+1))-(*(*(p+1)+1)*(*(*(p+2)+0)))));
    }
    // free memory
    for (int i = 0; i < row; i++)
    {
        free(*(p + i));
    }
    free(p);
printf("Determinant of the matrix is: %d",determinant);
    return 0;
}