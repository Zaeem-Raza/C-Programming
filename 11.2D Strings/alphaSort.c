#include <stdio.h>
#include <string.h>
#define SIZE 100
void sort(char str[5][SIZE]);
#define strings 5
int main()
{
    char str[5][SIZE];
    printf("Enter %d strings: ", strings);
    for (int i = 0; i < strings; i++)
    {
        scanf("%s", str[i]);
    }
    sort(str);
    printf("In lexicographical order: ");
    for (int i = 0; i < strings; i++)
    {
        printf("%s ", str[i]);
    }
    return 0;

}
void sort(char str[5][SIZE])
{
    char temp[SIZE];
    for (int i = 0; i < strings; i++)
    {
        for (int j = i + 1; j < strings; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}