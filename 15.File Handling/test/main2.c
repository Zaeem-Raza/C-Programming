#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
    fp=fopen("read.txt","r");
    char name[SIZE];
    int age=0;
    if(fp){
        printf("File opened successfully");
        fscanf(fp,"%s %d\n",name,&age);
        printf("\nName: %s \nAge: %d\n",name,age);
 }
    else{
        printf("File not found");
    }
    return 0;
}