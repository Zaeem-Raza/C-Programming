//compare two strings without using library function
#include<stdio.h>
#define SIZE 100
int stringcmp(char str1[], char str2[]);
int main()
{
   
   char str1[SIZE], str2[SIZE];
    printf("Enter 1st string :");
    gets(str1);
    printf("Enter 2nd string :");
    gets(str2);
    int result = stringcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}
int stringcmp(char str1[], char str2[])
{
    int i = 0;
   while(str1[i]!='\0'&&str2[i]!='\0'){
     if(str1[i]!=str2[i]){
        return 1;
     }
     i++;
   }
   return 0;
}