#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    printf("%d",1&3);    // 1
    printf("\n%d",1|3);    // 3
    printf("\n%d",~1);     // -2
    printf("\n%d",1^3);    // 2
    printf("\n%d",1<<2);   // 4
    printf("\n%d",1>>2);    // 0
    // printf("\n%d",1|(--2));    // error bcz 2 is not a constant
    int a=10;
    int i=2;
    printf("\n%d",1&(a%--i));    // 1
    

    return 0;
}