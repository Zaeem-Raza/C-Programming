/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   06

Statement:   Write a program in C to print all the alphabets using a pointer
*/

#include <stdio.h>
int main()
{
    char *p;
    char str[26];
    p = str;
    printf("The alphabets are: \n");
    for (int i = 0; i < 26; i++)
    {
        *p = 'A' + i;
        printf("%c  ", *p);
        p++;
    }
}
