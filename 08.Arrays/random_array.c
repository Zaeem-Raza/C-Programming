#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
int main(){
    srand(time(0));
    int arr[SIZE];
    int freq[35]={0};
    for(int i=0;i<SIZE;i++){
        int x=10+rand()%25;
        arr[i]=x;
    }
    printf("Elements of Random array are:");
    for(int i=0;i<SIZE;i++){
       printf("\t%d",arr[i]);
    }
}