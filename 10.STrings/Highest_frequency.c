#include <stdio.h>
#define SIZE 100
void highest(char str[SIZE]){
    int max = 0;
    char index;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = i; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                count++;
                if (count > max)
                {
                    index = str[i];
                    max = count;
                }
            }
        }
    }
    printf("Max occured : %c  %dtimes ", index, max);
}
int main()
{
    char str[SIZE];
    printf("Enter a string ");
    gets(str);
    highest(str);
}
