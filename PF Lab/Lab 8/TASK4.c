#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char n[SIZE];
    fgets(n, SIZE, stdin);
    int sz = 0;
    while (n[sz] != '\0')
    {
        sz++;
    }
    sz -= 1;
    for (int i = 0; i < sz && n[i] != '\0'; i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            int num1 = n[i] ;
            if (num1 % 2 != 0)
            {
                int num2 = n[i + 1] ;
                if (num2 % 2 != 0)
                {
                    sz++;
                    for (int j = sz - 1; j >= i + 1; j--)
                    {
                        n[j] = n[j - 1];
                    }
                    n[i + 1] = '-';
                }
            }
        }
    }
    n[sz] = '\0';
    printf("%s", n);
}
