#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    // write a program to remove all extra blanks from the space
    char str[SIZE];
    printf("ENter a string: ");
    scanf("%[^\n]", str);
    // printf("string: %s",str);
    int i = 0;
    int j = 0;
    int k = 0;
    // char str2[SIZE];
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            j = i + 1;
            while (str[j] == ' ')
            {

                for (int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                j++;
            }
        }

        i++;
    }
    printf("%s", str);
    return 0;
}