/*Name:            Zaeem Raza
  Roll Number :    BCSF21M022
  Question number: 01
  Statement:       Write a C/C++ function to print pascal triangle. Input number of rows (say k) from user in main function.
Then call the function from main with k as parameter. For k rows, use integer array of k+2 values*/

/*As stated in the statement, I have asked user to input the number of rows.
Them I passed the array to a function.
In function, I initilized k number of arrays and in each iteration,initilized array of size k+2,
the value of inner loop(j) comes from the formula of combination
*/
#include <stdio.h>
void printPascal(int k);
long long int fact(int n);
int main()
{
    int k;
    printf("Enter the number of rows: ");
    scanf("%d", &k);
    while (k < 0||k>13)
    {
        printf("Invalid input\nENter again: ");
        scanf("%d", &k);
    }
    // passing k to the function
    printPascal(k);
}
void printPascal(int k)
{
    // The formula of combination is n!/r!(n-r)!
    for (int i = 0; i < k; i++)
    {
        // initializing array of size k+2 as given in the statement
        int arr[k + 2];
        // the first element of each array is 0
        arr[0] = 0;
        // taking outer loop as n and inner loop as r
        for (int j = 1; j < k + 2; j++)
        {
            if (j <= i + 1) /* this is the condition for combination, nCr=n!/r!(n-r)! --->
             r<=n should be satisfied
                             as j has been initialized by 1, so we add 1 to rectify it.*/
            {
                int n = i;
                int r = j - 1;
                arr[j] = fact(n) / (fact(r) * fact(n - r));
                printf("%d  ", arr[j]);
            }
            else
            {
                arr[j] = 0; // declaring the rest of the loop to zero
            }
        }
        printf("\n");
    }
}

long long int fact(int n)
{
    // the factorial of 0 is 1
    //  the factorial of 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
}
