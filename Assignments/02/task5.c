/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   05

Statement:   Write a C program to copy one string to another string using loop.
*/

#include <stdio.h>
#define SIZE 100
void Copy(char *pt1, char *pt2);
int main()
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str1); // %[^\n]s is used to read string with spaces
    char *pt1 = str1;
    char *pt2 = str2;
    printf("String before copying:\n");
    printf("\nString#1 : %s", str1);
    printf("\nString#2 : %s", str2); // prints garbage value

    Copy(pt1, pt2);
    printf("\nString after copying:\n");
    printf("\nString#1 :%s", str1);
    printf("\nString#2 :%s", str2);
    return 0;
}

void Copy(char *pt1, char *pt2)
{
    while (*pt1 != '\0')
    {
        *pt2 = *pt1;    // copying character by character
        pt2++;
        pt1++;
    }
    *pt2 = '\0';   // adding null character at the end of string
}
