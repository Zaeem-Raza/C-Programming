/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   02

Statement:    Write a C program to count number of vowels and consonants in a string using pointers
*/

#include <stdio.h>
#define SIZE 100
int main()
{
    char str[SIZE];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); // %[^\n]s is used to read string with spaces
    char *ptr=str;

    for (int i = 0; str[i] != '\0'; i++)
    {       // if character is vowel, increment vowels
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            vowels++;
        }  // if character is consonant, increment consonants
        else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            consonants++;
        }
        else
        {
            // do nothing
        }
        ptr++;
    }
    printf("\nThe number of Vowels in the given string are: %d", vowels);
    printf("\nThe number of consonants in the given string are : %d", consonants);
    return 0;
}
