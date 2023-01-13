#include <stdio.h>
#define SIZE 100
void remspace(char str[SIZE])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            for (int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    printf("%s", str);
}
int main()
{
    char str[SIZE];
    printf("Enter a string ");
    gets(str);
    remspace(str);
}