#include <stdio.h>
#include <stdlib.h>
#include "source.h"
#include "source.c"
int main(void)
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    int y=sq(x);
    printf("%d squared is %d",x,y);
 
    return 0;
}