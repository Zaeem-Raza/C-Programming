/*Name:            Zaeem Raza
  Roll Number :    BCSF21M022
  Question number: 04
  Statement:      Design a matrix calculator. Input two matrices A and B.
   Design a menu to ADD, SUBTRACT and MULTIPLY
two matrices. Then add functionality to determine whether a matrix is symmetric or not. Also print value
of determinant of a matrix.*/

/*In this question, I have asked user to input two matrices A and B in main
   then displayed a menu either he wants to Add,Subtract or Multiply the matrices
   if a user enters 1, the sum matrix will be displayed and I will ask the user if he wants to continue or not
   If user enters any key, then the menu will be displayed again
   it continues unless the user enters 0
*/

/*Here I have asked the user to enter the order of matrices*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
// Function decleration
void getMatrix(int R, int C, int arr[R][C]);
void printMatrix(int R, int C, int arr[R][C]);
void Add(int R, int C, int A[][C], int B[][C]);
int determinant(int R, int C, int A[][C]);
int isSymmetric(int R, int C, int mat[][C]);
void Diff(int R, int C, int A[][C], int B[][C]);
void multiplyMatrix(int R1, int R2, int C1, int C2, int A[R1][C1], int B[R2][C2]);
int main()
{
    int R1, R2, C1, C2;
    printf("Enter Size of Matrix 1: (m-n): ");
    // enter the size like this
    // 2-2
    scanf("%d-%d", &R1, &C1);
    printf("Enter the elements of 1st matrix: ");
    int A[R1][C1];
    getMatrix(R1, C1, A);
    printf("Enter Size of Matrix 2: (m-n) ");
    scanf("%d-%d", &R2, &C2);
    int B[R2][C2];
    printf("Enter the elements of 2nd matrix: ");
    getMatrix(R2, C2, B);
    int user_choice;
    printf("Enter the elements of 2nd matrix: ");
    system("CLS");
    do
    {
        printf("\nMatrix A is :\n");
        printMatrix(R1, C1, A);
        printf("\nMatrix B is :\n");
        printMatrix(R2, C2, B);
        printf("\t\t\t\t<------USER'S MENU----->");
        printf("\n1. Add A and B");
        printf("\n2.Subtract B from A");
        printf("\n3.Multiply A and B");
        printf("\n0.Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &user_choice);
        while (user_choice < 0 || user_choice > 3)
        {
            printf("Invalid input\nEnter again");
            scanf("%d", &user_choice);
        }
        switch (user_choice)
        {
        case 1:
            if (R1 != R2 || C1 != C2)
            {
                printf("For Addition,Size of both the matrices should be same");
            }
            else
            {
                Add(R1, C1, A, B);
            }
            break;
        case 2:
            if (R1 != R2 || C1 != C2)
            {
                printf("For Subtraction,Size of both the matrices should be same");
            }
            else
            {
                Diff(R1, C1, A, B);
            }
            break;
        case 3:
            if (C1 != R2)
            {
                printf("Multiplicattion is not possible ");
            }
            else
            {
                multiplyMatrix(R1, R2, C1, C2, A, B);
            }
            break;
        default:
            break;
        }
    } while (user_choice != 0);
}
void getMatrix(int R, int C, int arr[R][C])
{
    // getting matrix elements one-by-one
    for (int row = 0; row < R; row++)
    {

        for (int col = 0; col < C; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
}
void printMatrix(int R, int C, int arr[R][C])
{
    // printing the elements of the matrix
    for (int row = 0; row < R; row++)
    {

        for (int col = 0; col < C; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}

int determinant(int R, int C, int A[][C])
{
    int det;
    if (R == 2)
    {
        // finding determinant;
        det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
        // printf("\nThe determinant of above matrix is :%d", det);
    }

    else if (R == 3)
    {
        // finding determinant;
        det = (A[0][0] * ((A[1][1] * A[2][2]) - (A[1][2] * A[2][1]))) - (A[0][1] * ((A[1][0] * A[2][2]) - (A[1][2] * A[2][0]))) + (A[0][2] * ((A[1][0] * A[2][1]) - (A[1][1] * A[2][0])));
        // printf("\nThe determinant of above matrix is :%d", det);
    }
    else
    {
        printf("I cannot calculate determinant:/");
    }
    return det;
    printf("\n");
}

int isSymmetric(int R, int C, int mat[][C])
{
    int flag = 1;
    if (R != C)
    {

        flag = 0;
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                flag = 0;
            }
        }
    }
    return flag;
    printf("\n");
}
void Diff(int R, int C, int A[][C], int B[][C])
{
    int Difference[R][C];
    for (int row = 0; row < R; row++)
    {

        for (int col = 0; col < C; col++)
        {
            Difference[row][col] = A[row][col] - B[row][col];
        }
        printf("\n");
    }

    printf("The Difference is ;\n");
    printMatrix(R, C, Difference);
    if (R != C)
    {
        printf("Determinant is not possible");
    }
    else
    {

        printf("\nThe determinant of the difference is : %d", determinant(R, C, Difference));
    }
    int sym = isSymmetric(R, C, Difference);
    if (sym == 1)
    {
        printf("\nThe difference is symmetric\n");
    }
    else
    {
        printf("\nThe difference is not symmetric\n");
    }

    system("pause");
    system("CLS");
}
void Add(int R, int C, int A[][C], int B[][C])
{
    int Sum[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }

    printf("The Sum matrix is ;\n");
    printMatrix(R, C, Sum);
    if (R != C)
    {
        printf("Determinant is not possible");
    }
    else
    {
        printf("\nThe determinant of the Sum is : %d", determinant(R, C, Sum));
    }
    int flag = isSymmetric(R, C, Sum);
    if (flag == 1)
    {
        printf("\nThe Sum is symmetric\n");
    }
    else
    {
        printf("\nThe Sum is not symmetric\n");
    }

    system("pause");
    system("CLS");
}
void multiplyMatrix(int R1, int R2, int C1, int C2, int A[R1][C1], int B[R2][C2])
{
    /*For multiplication, the necessary condition is that the number of columns of
      Matrix A should be equal to the number or rows of Matrix B*/
    if (C1 != R2)
    {
        printf("Multiplication is not possible");
    }
    else
    {
        int Product[R1][C2];
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                Product[i][j] = 0;
                for (int k = 0; k < C1; k++)
                {
                    Product[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        printf("The product of matrix is :\n");
        printMatrix(R1, C2, Product);
        if (R1 != C1 || R2 != C2)
        {
            printf("Determinant is not possible");
        }
        else
        {
            printf("\nThe determinant of the Product is : %d", determinant(R1, C2, Product));
        }
        int sym = isSymmetric(R1, C2, Product);
        if (sym == 1)
        {
            printf("\nThe Product is symmetric\n");
        }
        else
        {
            printf("\nThe Product is not symmetric\n");
        }
    }
    system("pause");
    system("CLS");
}
