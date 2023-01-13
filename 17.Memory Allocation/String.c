#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char *str1 = (char *)malloc(SIZE * sizeof(char));
    char *str2 = (char *)malloc(SIZE * sizeof(char));
    printf("Enter 1st string :");
    gets(str1);
    printf("Enter 2nd string :");
    gets(str2);
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Not equal");
            return 0;
        }
        i++;
    }
    printf("Equal");
    return 0;
}