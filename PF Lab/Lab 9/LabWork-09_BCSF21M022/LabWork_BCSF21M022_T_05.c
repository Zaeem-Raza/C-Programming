#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void display(int arr[SIZE][SIZE]);
void populateArray(int arr[][SIZE]);
int findMin(int arr[][SIZE]);
int findMax(int arr[][SIZE]);
int main()
{
    int arr[SIZE][SIZE];
    populateArray(arr);
    int minimun = findMin(arr);
    printf("\nMinimum in this array is :%d", minimun);
    int maximum = findMax(arr);
    printf("\nMaximum in this array is :%d", maximum);
}
void populateArray(int arr[][SIZE])
{
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int x = rand() % 1000;
            arr[i][j] = x;
        }
    }
    display(arr);
}
void display(int arr[SIZE][SIZE])
{

    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
int findMin(int arr[][SIZE])
{
    int min = 1000;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int findMax(int arr[][SIZE])
{
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
