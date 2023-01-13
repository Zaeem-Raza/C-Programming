/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   13

 Write a C function to compare two strings passed to function by pointers. Return value is an integer
which is 0 if both are equal. If return value is greater than 0, it means first string is greater than second
and if it is less than 0m it means that first string is less than second string. Print “Equal”, “GREATER”
or “LESS” in main() after calling function.

 */

#include <stdio.h>
#define SIZE 100
int Compare(char *pt1, char *pt2);
int main(){

 char str1[SIZE];
    char str2[SIZE];
    printf("Enter 1st string: ");
    scanf(" %[^\n]", str1); // %[^\n]s is used to read string with spaces
    printf("Enter 2nd string: ");
    scanf(" %[^\n]", str2);
    char *pt1 = str1;
    char *pt2 = str2;

    int result = Compare(pt1, pt2);
    if(result == 0){
        printf("Equal");   // if result is 0, both strings are equal
    }
    else if(result > 0){
        printf("GREATER");   // if result is greater than 0, first string is greater than second
    }
    else{
        printf("LESS");   // if result is less than 0, first string is less than second
    }
}
int Compare(char *pt1, char *pt2){
   while(*pt1!='\0'&& *pt2!='\0'){

        if(*pt1>*pt2){  // if first string is greater than second
            return 1;
        }
        else if(*pt2>*pt1){
            return -1;
        }
pt1++;   // move to the next character
pt2++;   // move to the next character
   }
   return 0;
}
