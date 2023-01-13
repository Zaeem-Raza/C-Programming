#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *f=fopen("file7.txt","w");
    if(f){
        printf("File found");
    }
    else{
        printf("file not found");
    }
    return 0;
}