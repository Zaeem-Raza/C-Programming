#include <stdio.h>
#define Row 3
#define Col 5
#define SIZE 5
void getMatrix(int arr[Row][Col])
{
    printf("Enter the elements of matrix :");
    for (int row = 0; row < Row; row++)
    {

        for (int col = 0; col < Col; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
}
void printMatrix(int arr[Row][Col])
{
    printf("In matrix form :\n");

    for (int row = 0; row < Row; row++)
    {

        for (int col = 0; col < Col; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
void Add(int A[][SIZE],int B[][SIZE]){
    int C[SIZE][SIZE];
    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
        printf("\n");
    }
    printf("The Sum matrix is ;\n");
    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            printf("%d\t", C[row][col]);
        }
        printf("\n");
    }
}
int main(){
    int A[Row][Col];
  /*  int B[SIZE][SIZE];
    int C[SIZE][SIZE];
*/
       getMatrix(A);
       getMatrix(B);
       Add(A,B);

    
}