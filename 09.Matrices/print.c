#include <stdio.h>
#define SIZE 3
int main(){
   int A[SIZE][SIZE];
   printf("Enter the elements of matrix :");
   for(int row=0;row<SIZE;row++){

       for(int col=0;col<SIZE;col++){
        scanf("%d",&A[row][col]);
       }
   }
   printf("\n\n");
   printf("In matrix form :\n");

   for (int row = 0; row < SIZE; row++)
   {

       for (int col = 0; col < SIZE; col++)
       {
           printf("%d\t", A[row][col]);
       }
       printf("\n");
   }
}
