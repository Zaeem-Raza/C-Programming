#include <stdio.h>
#define SIZE 100
int main(){
    char str[SIZE]="Hello World";
    char *p=str;
    char *q=str;
    while(*p!='\0'){
        p++;
    }
    p--;
    while(q<p){
        char temp=*q;
        *q=*p;
        *p=temp;
        q++;
        p--;
    }
    printf("The reversed string is %s",str);
    return 0;
    

}