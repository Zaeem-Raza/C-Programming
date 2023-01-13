#include <stdio.h>
#define SIZE 3
int magic(int [][SIZE]);
int main()
{
    int A[SIZE][SIZE];
    printf("Enter elements of matrix: ");
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (A[row][col] < 1 || A[row][col] > 9)
            {
                scanf("%d",&A[row][col]);
            }
        }
    }
int mres=magic(A);
if(mres){
    printf("\nYes a magic square");
}
else{
    printf("\nNot a magic square");
}
}
int magic(int A[][SIZE]){
 
   int flag=1;
    
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            if(A[row][col]<1||A[row][col]>9){
                flag=0;
            }
        }
    }

    for (int row = 0; row < SIZE; row++)
    {
        int sum=0;
        for (int col = 0; col < SIZE; col++)
        {
           sum+=A[row][col];
        }
        printf("\nThe sum of this row is :%d",sum);
    }
    for (int row = 0; row < SIZE; row++)
    {
        int sum = 0;
        for (int col = 0; col < SIZE; col++)
        {
            sum += A[col][row];
        }
        printf("\nThe sum of this column is :%d", sum);
    }

    int a1=A[0][0]+A[0][1]+A[0][2];
    int a2 = A[1][0] + A[1][1] + A[1][2];
    int a3 = A[2][0] + A[2][1] + A[2][2];
    int a4 = A[0][0] + A[1][0] + A[2][0];
    int a5 = A[0][1] + A[1][1] + A[2][1];
    int a6 = A[0][2] + A[1][2] + A[2][2];
    if(a1==a2&&a2==a3&&a3==a4&&a4==a5&&a5==a6){
        flag=1;
    }
    return flag;

}