#include <stdio.h>
#define SIZE 100
void common(char str1[SIZE], char str2[SIZE])
{
    char str3[SIZE];
    int x = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str2[j] ==str1[i])
            {
                str3[x] = str1[i];
                x++;
            }
        }
    }
    str3[x] = '\0';
    printf("%s", str3);
}
int main()
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter 1st string :");
    gets(str1);
    printf("Enter 2nd string :");
    gets(str2);
    common(str1, str2);
}