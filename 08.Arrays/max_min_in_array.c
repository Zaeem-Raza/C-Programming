// C program to find out the minimum and maximum value in an array
#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    printf("Array Elments are: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
        // finding maximum
        if(arr[i]>max){
            max=arr[i];
        }
        // finding minimum
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMaximum value: %d",max);
    printf("\nMinimum value: %d",min);
}