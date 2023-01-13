#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp;
    fp = fopen("read.txt", "r");
    if (fp)
    {
          while(!feof(fp))
        {
             int a;
             char str[SIZE];
             fscanf(fp, "%d %s", &a, str);
             printf("Roll No: %d -- Name: %s\n", a, str);
        }
    }
        else
        {
            printf("File not found");
            exit(1);
        }
        return 0;
    }