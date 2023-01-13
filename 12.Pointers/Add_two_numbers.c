#include <stdio.h>
int Add(int *p1, int *p2)
{
    return *p1 + *p2;
}
int main()
{
    int x, y;
    printf("Add two numbers :");
    printf("\n first number: ");
    scanf("%d", &x);
    printf("\n2nd number: ");
    scanf("%d", &y);
    int z = Add(&x, &y);
    printf("Answer: %d", z);
}