/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   07

Statement:    Write a C program to copy one array elements to another array using pointers
*/

#include <stdio.h>
#define SIZE 5
void Copy(int *pt1, int *pt2);
int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int *p1 = arr1;   // p1 points to the first element of arr1
    int *q = arr2;   // q points to the first element of arr2
    printf("Enter the elements of array 1: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", p1);
        p1++;   // p1 points to the next element of arr1
    }
    p1 = arr1;
    Copy(p1, q);
    printf("After Copying:\n");
    printf("Array 1: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *p1);
        p1++;
    }
    printf("\nArray 2: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *q);
        q++;
    }
}
void Copy(int *pt1, int *pt2)
{
    for (int i = 0; i < SIZE; i++)
    {
        *pt2 = *pt1;   // copying element by element
        pt1++;       // pt1 points to the next element of arr1
        pt2++;
    }
}
