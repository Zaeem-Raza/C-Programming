#include <stdio.h>
#define SIZE 19
int main()
{
    char str[SIZE] = "Hello World";
    char str2[SIZE];

    // declaring  pointer to each string
    char *p1 = str;
    char *p2 = str2;
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    printf("String 1: %s\n", str);

    printf("String 2: %s", str2);
    return 0;
}