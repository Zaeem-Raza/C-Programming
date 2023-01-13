#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    char str[SIZE];
    char str2[SIZE];
    fscanf(fp,"%[^\t]\t",str,str2);
    printf("%s\t%s",str,str2);
    return 0;
}