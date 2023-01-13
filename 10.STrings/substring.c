#include <stdio.h>
#define SIZE 100
int subString(char str[SIZE], char sub[SIZE])
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == sub[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
        if (sub[j] == '\0')
        {
            return 1;
        }
    }
    return 0;
}
int findSub(char str1[SIZE], char str2[SIZE])
{
    // finding length of second string
    int l, i, j;
    l = 0;
    while (str2[l] != '\0')
    {
        l++;
    }

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Substring found at position %d", i - j + 1);
    }
    else
    {
        printf("Substring not found");
    }
}
int main()
{
#include <stdio.h>
    char str1[80], str2[80];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int sub = subString(str1, str2);
    if (sub == 1)
    {
        findSub(str1, str2);
    }
    else
    {
        printf("Substring not found");
    }
    return 0;
}
