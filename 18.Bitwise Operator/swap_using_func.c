#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void swap(int *num1, int *num2)
{
    *num1=*num1^*num2;
    *num2=*num1^*num2;
    *num1=*num1^*num2;
}
int main(void)
{
    int num1=6;
    int num2=8;
    swap(&num1,&num2);
    printf("Num1: %d\n Num 2: %d",num1,num2);
    return 0;
}