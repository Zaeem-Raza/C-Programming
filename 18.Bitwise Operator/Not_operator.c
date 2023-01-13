#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
   unsigned int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",~num);  // 2's complement of num
    return 0;
}