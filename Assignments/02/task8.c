/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   08

Statement:     Write a C program to input elements in array and search an element in array using pointers.
*/

#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    int to_Search;
    int *p = arr;
    printf("Enter the elements of array : ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = arr; // p points to the first element of arr
    printf("Enter an element to search: ");
    scanf("%d", &to_Search);

    for (int i = 0; i < SIZE; i++)
    {
        if (*p == to_Search)
        { // if element is found
            printf("\nElement found at index %d", i);
        }
        p++; // if element is present
             // multiple times,it will print it multiple times
    }
}
