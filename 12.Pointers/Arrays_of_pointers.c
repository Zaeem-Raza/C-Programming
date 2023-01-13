#include <stdio.h>
#define SIZE 5
int main(){
    char *A[] = {"Programming", "Fundamentals", "Finals", "MIDs"};
    printf("%s\n", *A + 1);   // prints "rogramming" 
    printf("%s\n", *(A + 2)); //Finals
    printf("%s\n", *(A + 2));  //Finals
    printf("%s\n", *(A + 1) + 4);  //amentals
    printf("%s\n", *A + 5); //ramming


   int arr1[5]={1,2,3,4,5};
    int arr2[6]={6,7,8,9,10,11};
    int arr3[3]={12,13,14};
    int *p[]={arr1,arr2,arr3};
    int sizes[]={5,6,3};
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<sizes[i];j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}