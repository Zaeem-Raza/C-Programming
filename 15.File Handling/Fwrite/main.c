#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
fp=fopen("test.txt","w");


if(fp)
{
    int a[10]={1,4,6,3,2,5,7,8,9,10};
    fwrite(&a,sizeof(int),1,fp);
}
}
    
    