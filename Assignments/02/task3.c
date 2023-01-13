/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   03

Statement:   Make a function named “isPalindrome” that checks whether a string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
int length(char *p1) ;
int isPalindrome(char *p1);
int main()
{
    char str[SIZE];   //
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    int res = isPalindrome(str);
    if (res == 1)
    {
        printf("The given string is a palindrome");
    }
    else
    {
        printf("The given string is not a palindrome");
    }
    return 0;
}
int length(char *p1)
{
    int count = 0;
    while (*p1 != '\0')
    {
        count++;
        p1++;
    }
    return count;
}
int isPalindrome(char *p1)
{
    int len = length(p1);

    char *p2 = p1 + (len - 1);  // p2 points to the last character of the string

    while (*p1 != '\0')
    {
        if (*p1 != *p2)    // if the first character is not equal to the last character
        {
            return 0;
        }
        p1++;
        p2--;
    }
    return 1;
}
