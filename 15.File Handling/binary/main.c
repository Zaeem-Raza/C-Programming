#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
    fp=fopen("binary.dat","wb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    int i;
    for(i=0;i<SIZE;i++)
    {
        fwrite(&i,sizeof(int),1,fp);
    }
    
    return 0;
}