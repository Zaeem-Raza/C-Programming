#include <stdio.h>
#define SIZE 3
int isSymmetric(int mat[SIZE][SIZE]){
   
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(mat[i][j]!=mat[j][i]){
                return 0;
            }
        }
    }
    return 1;
}
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
    printf("In matrix form :\n");

    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
int main(){
    int mat[SIZE][SIZE];
   getMatrix(mat);
   printMatrix(mat);
    if(isSymmetric(mat)){
        printf("Symmetric");
    }
    else{
        printf("Not Symmetric");
    }
}