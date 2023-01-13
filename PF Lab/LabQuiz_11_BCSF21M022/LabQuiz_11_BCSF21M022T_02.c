#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void makeStr(char *userString,char *newString,char c);
int main(void)
{
    char userString[SIZE];
    char c;
    char newString[SIZE];
    printf("Enter a string");
    scanf(" %[^\n]",userString);
    printf("Enter the character: ");
    scanf(" %c",&c);

    makeStr(userString,newString,c);
    return 0;
}
void makeStr(char *userString, char *newString, char c){
int i=0;
  char *p=newString;
    while(*userString!='\0'){
        if(*userString==c){
            while(*userString!=32){
                *p=*userString;
                p++;
                userString++;
                // newString++;
            }


           *p=',';
           p++;
        }
        else{
      userString++;
        }
    }

    *p='\0';
    printf("The new string is: %s",newString);

}
