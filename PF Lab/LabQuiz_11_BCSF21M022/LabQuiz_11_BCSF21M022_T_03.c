#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
struct Dictionary
{
    char word[20];
    char meaning[30];
};
int main(void)
{
    int x;
    printf("Enter the number of words you want to enter");
    scanf("%d", &x);
    struct Dictionary d[x];
    struct Dictionary *dptr = d;
    for (int i = 0; i < x; i++)
    {
        printf("\nEnter the word of Dictionary %d : ", i + 1);
        scanf("%s", dptr->word);
        printf("\nEnter the meaning of Dictionary %d : ", i + 1);
        scanf("%s", dptr->meaning);
        dptr++;
    }
    int len;
    printf("Enter the length of the word");
    scanf("%d", &len);
    for (int i = 0; i < x; i++)
    {
        if (strlen(d[i].word) == len)
        {
            printf(" Word: %s  Meaning: %s\n", d[i].word, d[i].meaning);
        }
    }
    return 0;
}