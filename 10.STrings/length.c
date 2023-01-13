#include <stdio.h>
#define SIZE 15
int length(char A[])
{
    int len = 0;
    while (A[len] != '\0')
    {
        len++;
    }
    return len;
}
int length(char []);
int main(){
    char str[SIZE];
    printf("ENter any string");
    gets(str);

    // for(int i=0;str[i]!='\0';i++){
    //     count++;
    // }
    // printf("\n The length of the string is :%d",count);
    int count=length(str);
   printf("Lentgh of string :%d",count);
}
int length(char A[]){
    int len =0;
    while(A[len]!='\0'){
        len++;
    }
    return len;
}