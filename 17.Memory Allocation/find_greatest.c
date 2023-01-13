#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *p = (int *)malloc(size * sizeof(int));
    if(p==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    int large;
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
      
    }
    large=*p;
    // printf("large: %d",*p);
    for(int i=0;i<size;i++){
        if(*(p+i)>large){
            large=*(p+i);
        }
    }
    printf("Largest Number: %d ",large);
    return 0;
}