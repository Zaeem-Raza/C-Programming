#include <stdio.h>
#define SIZE 100
int compare(char *p1, char *p2)
{
    while (*p1 != '\0' && *p2 != '\0')
    {
        if (*p1 == *p2)
        {
            p1++;
            p2++;
        }
        else
        {

            return *p1 - *p2;
        }
    }
    return 0;
}
int main()
{

    char str1[SIZE] = "zaeem"; // ascii value of z is 122 and a is 97
    char str2[SIZE] = "Zaeem"; // ascii value of Z is 90 and a is 97
    char *p1 = str1;
    char *p2 = str2;
    int res = compare(p1, p2);
    if (res == 0)
    {
        printf("The strings are equal");
    }
    else if (res > 0)
    {
        printf("String 1 is greater than string 2");
    }
    else
    {
        printf("String 2 is greater than string 1");
    }
}