#include <stdio.h>
#define SIZE 100
void Title(char str[SIZE]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i - 1] != 32)
            {
                str[i] += 32;
            }
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == 32)
            {
                str[i] -= 32;
            }
        }
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
    }
    printf("%s", str);
}
int main()
{
    char str[SIZE];
    printf("Enter a string");
    fgets(str, SIZE, stdin);
    printf("Original string: %s", str);
    printf("\nTitle case string: ");
     Title(str);
}
