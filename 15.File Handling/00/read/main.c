#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("color 0b");
    FILE *f=fopen("abc.txt","r");
    char str[20];
    int a;
    if(f){
       fscanf(f,"%s %d",str,&a);
       printf("Name: %s",str);
       printf("Roll number: %d",a);

    }
    else{
        printf("Not found");
    }
    return 0;
}