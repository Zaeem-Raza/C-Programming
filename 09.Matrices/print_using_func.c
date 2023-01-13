#include <stdio.h>
#define Row 3
#define Col 5
void getMatrix(int arr[rows][columns]){
    printf("Enter the elements of matrix :");
    for (int row = 0; row < rows; row++)
    {

        for (int col = 0; col < columns; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
}
void printMatrix(int arr[rows][columns]){
    printf("In matrix form :\n");

    for (int row = 0; row < rows; row++)
    {

        for (int col = 0; col < columns; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
int main()
{
    int rows,columns;
    printf("Enter number of rows");
    scanf("%d",&rows);
    printf("Enter number of columns");
    scanf("%d",&columns);
 
    int A[rows][columns];
  
    getMatrix(A);
    printMatrix(A);
   
}
