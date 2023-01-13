#include <stdio.h>
#define SIZE 100
#include <string.h>
int main(){
    char str1[SIZE];
    printf("Enter string :");
    gets(str1);
    printf("Length : %d",strlen(str1));
    char str2[SIZE];
    printf("\nEnter 2nd string :");
    gets(str2);
    printf("\nreverse of str1: %s",strrev(str1));
    printf("\nString 2 after copy : %s",strcpy(str2,str1));
    int x= strcmp(str1,str2);
    if(x==0){
        printf("\nBoth strings are equal");

    }
    else{
        if(x>0){
            printf("\nstr1 is greater");
        }
        else{
            printf("\nstr2 is greater");
        }
    }
}