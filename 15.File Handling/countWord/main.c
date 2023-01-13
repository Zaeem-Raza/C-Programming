#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *f=fopen("test.txt","r");
    int count=0;
    // char c;
    while(!feof(f)){
    char c = fgetc(f);
     if(c!=' '&&c!='\n'){
        count++;
     }
    }
    printf("count: %d",count);
    return 0;
}