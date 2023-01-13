#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
// struct al
// {
//   int a : 5;
//   char c : 8;
//   int b : 5;
// } a;
union ua
{
    int x;
    double y;
    int z;
    int num[8];
    char name[10];
};
int main(void)
{
    // printf("%d", sizeof(a));
    // return 0;
    union ua u = {10};
    u.x = 100;
    printf("x=%d y=%d z=%d", u.x, u.y, u.z);
    printf("\nz=%c", u.z);
    printf("\nname=%s", u.name);
    for (int i = 0; i < 9; i++)
        printf("\nnum[%d]=%d", i, u.num[i]);

    printf("\n address of x=%p", &u.x);
    printf("\n address of x=%p", &u.y);
    printf("\n address of x=%p", &u.z);
    printf("\n address of x=%p", &u.num);
    printf("\n address of x=%p", &u.name);
    printf("\n address of x=%p", &u);
    printf("\n Size of union=%d", sizeof(u));
    printf("\n Size of union=%d", sizeof(union ua));
}