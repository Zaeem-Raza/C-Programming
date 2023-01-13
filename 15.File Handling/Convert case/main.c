#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void)
{
    FILE *f = fopen("abc.txt", "r");
    if (f)
    {
        printf("Welcome to case conversion");
        char str[SIZE];
        fscanf(f, "%s", str);
        int i = 0;
        while (str[i] != '\0');
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }

            i++;
        }
        fclose(f);
        f = fopen("abc.txt", "w");
        fprintf(f, "%s", str);
    }
    else
    {
        printf("Error opening file");
        exit(1);
    }
    return 0;
}