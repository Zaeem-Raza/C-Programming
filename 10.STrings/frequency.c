#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
void frequency(char str[])
{
    int i, len;
    int freq[26];
    len = strlen(str);

    /* Initialize frequency of each character to 0 */
    for (i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    /* Find total number of occurrences of each character */
    for (i = 0; i < len; i++)
    {
        /* If the current character is lowercase alphabet */
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 97]++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            freq[str[i] - 65]++;
        }
    }

    /* Print the frequency of all characters in the string */
    printf("\nFrequency of all characters in the given string: \n");
    for (i = 0; i < 26; i++)
    {
        /* If current character exists in given string */
        if (freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }
}
int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

   frequency(str);

    return 0;
}
