#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{

    int n;
    printf("Enter the no.:");
    scanf("%d", &n);
    switch (n > 0) // 1-start
    {
    case 1:
        switch (n == 2 || n == 3) // 2-start
        {
        case 1:
            printf("No. is prime");
            break;

        case 0:
            switch (n % 2 != 0 && n % 3 != 0) // 3-start
            {
            case 1:
                printf("No. is prime");
                break;
            case 0:
                printf("No. is not prime");
                break;
            } // 3-end

            break;
        } // 2-end

        break;
    case 0:
        printf("No. is not prime");
        break;
    } // 1-end
    return 0;
}