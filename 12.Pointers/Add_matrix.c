#include <stdio.h>
#define SIZE 3
int main(){
    int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int mat3[SIZE][SIZE];
    printf("Enter the elements of the first matrix: ");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d",(*(mat1+i)+j));
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d",(*(mat2+i)+j));
        }
    }
    printf("\nmatrix A:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",*(*(mat1+i)+j));
        }
        printf("\n");
    }
    printf("\nmatrix B:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",*(*(mat2+i)+j));
        }
        printf("\n");
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            *(*(mat3 + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("\nmatrix C:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",*(*(mat3+i)+j));
        }
        printf("\n");
    }
    
}