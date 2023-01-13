#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void func(int num){
    int zeros=0;
    int ones=0;
    for(int i=0;i<32;i++){
        if(num&1){
            ones++;
        }
        else{
            zeros++;
        }
        num>>=1;
    }
    printf("Number of ones: %d",ones);
    printf("\n Number of zeros: %d",zeros);
}
int main(void)
{
    func(22);
    return 0;
}