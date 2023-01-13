// swap two integers using pointers
#include <stdio.h>
int SWAP(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int x;
    int y;
    printf("\nEnter 1st number: ");
    scanf("%d", &x);
    printf("\nEnter 2nd number: ");
    scanf("%d", &y);
    printf("Before Swaping: ");
    printf("x=%d\t y=%d",x,y);
    SWAP(&x, &y);
    printf("\nAfter Swapping: ");
    printf("x=%d\t y=%d", x, y);
}