#include <stdio.h>
#include <stdlib.h>
// #include <alloc.h>
#define SIZE 100
int main(void)
{
    printf("Enter size of array: ");
    int size;
    scanf("%d", &size);
    int *p = (int *)malloc(size * sizeof(int));
    if(p==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
    }
    printf("\nElements of array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
    printf("\nAfter freeing memory: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", *(p + i));  // This will print garbage values
    }
    return 0;
}