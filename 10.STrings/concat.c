#include <stdio.h>
#define SIZE 20
int main(){
char str1[SIZE];
char str2[SIZE];
printf("Enter 1st string: ");
gets(str1);
printf("Enter 2nd string: ");
gets(str2);
int i=0;
while(str1[i]!='\0'){
    i++;
}
int j=0;
while(str2[j]!='\0'){
    str1[i]=str2[j];
    i++;
    j++;
}
str1[i]='\0';
printf("Concatenated string :%s",str1);
}