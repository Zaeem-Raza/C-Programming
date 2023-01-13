/*Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   10

 Write a C function to concatenate two strings. Function will have two parameters. Second string will
 be concatenated to first string passed in the function*/
#include <stdio.h>
#define SIZE 100
void Concat(char *pt1, char *pt2);
int main()
{
  char str1[SIZE];
  char str2[SIZE];
  printf("Enter 1st string: ");
  scanf(" %[^\n]s", str1); // %[^\n]s is used to read string with spaces
  printf("Enter 2nd string: ");
  scanf(" %[^\n]s", str2);
  char *pt1 = str1;
  char *pt2 = str2;
  printf("String before concatenation:\n");
  printf("\nString1: %s", str1);
  printf("\nString 2: %s", str2);

  Concat(pt1, pt2);
  printf("\nAfter Concatenation: ");
  printf("\nString1: %s", str1);
  printf("\nString2: %s", str2);
}
void Concat(char *pt1, char *pt2)
{

  // move to the end of the first string

  while (*pt1 != '\0')
  {
    pt1++; // move to the next character
  }
  while (*pt2 != '\0')
  {
    *pt1 = *pt2; // copy the second string to the first string
    pt1++;
    pt2++;
  }
  *pt1 = '\0'; // add null character at the end of the first string
}
