/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   01
Statement:    Write a C program in which:
• Takes a string as an input from the user
• Make a function named “reverseOrder” that reverses the order of the string
• Display the reversed string

 Example   Input:  Hello my name is Zaeem
           Output: Zaeem is name my Hello

*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int length(char *p1);
void reverseOrder(char *str);
int main(void)
{
    char str[SIZE];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); // %[^\n]s is used to read string with spaces
    printf("\nThe original string is: %s");
    printf("\nThe reversed string is: ");
    reverseOrder(str);
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
void reverseOrder(char *str)
{

    char reverse[SIZE];
    int *p1 = str;  // p1 points to the first character of the string
    int len = length(str);
    int k = 0;
    int a = len - 1;   // a is the index of the last character of the string
    int b = len - 1;   // b is the index of the last character of the string

    while (a > 0)  //
    {

        if (str[a] == ' ')   //if space
        {

            int i = a + 1;   //skip
            while (i <= b)   //b is still len-1
            {
                reverse[k] = str[i];
                i++;
                k++;
            }
            reverse[k++] = ' ';  //place space

            b = a - 1;
        }
        a--;
    }

    for (int i = 0; i <= b; i++)  // loop until b
    {
        reverse[k] = str[i];
        k++;
    }

    reverse[k] = '\0';  //placing null

    printf("%s", reverse);

}
