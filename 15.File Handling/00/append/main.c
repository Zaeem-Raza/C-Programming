#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *f=fopen("ab.txt","a");
    if(f){
     fprintf(f,"\nZaeem");
    }
    else{
        printf("Not found");
    }
    return 0;
}