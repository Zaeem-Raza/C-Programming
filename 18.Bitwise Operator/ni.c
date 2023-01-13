#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void)
{
    char str[] = "My name is habban";
    int x  = strlen(str);
    printf("%d\n", x);
    int count = 0;
    char temp[SIZE];
    int p = 0;
    int j;
    for(int i=x-1; i>0; i--)
    {
        printf(" %c ",str[i]);
        if(str[i] == ' ')
        {
            int k = i+1;
            for ( j = p; j < count; j++)
            {
                printf("\n%d\n",k);
                temp[j] = str[k];
                k++;
                p++;
            }
            temp[j] = ' ';
         //   p++;
            count = 0;
        }else
        {
            count++;
        }
    }
    printf("%s", temp);
    return 0;
}