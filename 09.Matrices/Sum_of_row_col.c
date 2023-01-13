#include <stdio.h>
#define SIZE 3
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
          int A[SIZE][SIZE];
          printf("Enter elements of Matrix\n");
          getMatrix(A);
          printMatrix(A);
        
   for(int row=0;row<SIZE;row++){
    int sum=0;
      for(int col=0;col<SIZE;col++){
        sum+=A[row][col];
      }
      printf("\nThe sum of row number #%d is %d",row+1,sum);
   }

   for (int row = 0; row < SIZE; row++)
   {
       int sum = 0;
       for (int col = 0; col < SIZE; col++)
       {
           sum += A[col][row];
       }
       printf("\nThe sum of column number %d is %d", row + 1, sum);
   }
}