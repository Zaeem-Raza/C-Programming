//actually not 2D pointer but a pointer pointing to 2D array

#include <stdio.h>
#define ROW 3
#define COL 3
int main(){

   int mat[ROW][COL];
   printf("Enter the elements in the matrix of %dx%d ",ROW,COL);
    for(int i=0;i<ROW;i++){
         for(int j=0;j<COL;j++){
              scanf("%d",(*(mat+i)+j));
         }
   
    }
    printf("The matrix is: \n");
    for(int i=0;i<ROW;i++){
         for(int j=0;j<COL;j++){
              printf("%d ",*(*(mat+i)+j));
         }
         printf("\n");
    }
    return 0;
}