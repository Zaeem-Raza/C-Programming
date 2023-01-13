#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fp;
    fp=~num;
    printf("Flip: %d",fp);
    return 0;
}