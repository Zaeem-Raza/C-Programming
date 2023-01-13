#include <stdio.h>
#define SIZE 5
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char *p1 = str1;
    char *p2 = str2;
    char str3[SIZE];
    char *p3 = str3;
    while (*p1 != '\0')
    {
        *p3 = *p1;
        p1++;
        p3++;
    }
    while (*p2 != '\0')
    {
        *p3 = *p2;
        p2++;
        p3++;
    }
    *p3 = '\0';

    printf("\nString 1: %s", str1);
    printf("\nString 2: %s", str2);
    printf("\nString 3: %s", str3);
}