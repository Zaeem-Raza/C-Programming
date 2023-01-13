#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char S1[SIZE];
    printf("Enter string : ");
    fgets(S1, SIZE, stdin);
    if (S1[0] >= 'a' && S1[0] <= 'z')
    {
        S1[0] -= 32;
    }

    for (size_t i = 1; S1[i] != '\0'; i++)
    {
        if (S1[i] == 32)
        {
            if (S1[i + 1] >= 'a' && S1[i + 1] <= 'z')
            {
                S1[i + 1] -= 32;    //capitalization
            }
        }
    }

    for (size_t i = 0; S1[i] != '\0'; i++)
    {
        if (S1[i] == 32)
        {
            for (size_t j = i; S1[j] != '\0'; j++)
            {
                S1[j] = S1[j + 1];
            }
        }
    }
    for (size_t i = 0; S1[i] != '\0'; i++)
    {
        printf("%c", S1[i]);
    }
}
