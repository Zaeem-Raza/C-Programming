#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
    fp=fopen("append.txt","a");
    char name[SIZE];
    int age=0;
    if(fp){
        printf("File opened successfully");
        printf("\nEnter the name of student :");
        scanf("%s",name);
        printf("\nEnter the age ");
        scanf("%d",&age);
        fprintf(fp,"Name : %s -- Age: %d",name,age);
        fclose(fp);
    }
    else{
        printf("File not found");
    }

    return 0;
}