#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void writeFile(char *filename, char *str)
{
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    else
    {
        fprintf(fp, "%s", str);
    }
    fclose(fp);
}

int main(void)
{

    writeFile("meds.txt", "Hemlo");

    return 0;
}