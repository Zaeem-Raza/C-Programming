#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
   int x;
   printf("Enter size of array: ");
    scanf("%d", &x);
    int **p;
    p = (int **)malloc(x * sizeof(int *));
    for (int i = 0; i < x; i++)
    {
        *(p + i) = (int *)malloc(x * sizeof(int));
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(p + i) + j));
        }
    }
    printf("\nElements of array are: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    //freeing memory
    for (int i = 0; i < x; i++)
    {
        free(*(p + i));
    }
    free(p);
    return 0;
}