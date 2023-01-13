#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    printf("\n%d",3>>1) ; // 1
    
    /*
    * Right shifting a number by 1 is equivalent to dividing it by 2
    * Right shifting a number by n is equivalent to dividing it by 2 raised to power n.
    */
   printf("\n%d",16>>3); // 2 (16/2^3)=> 16/8=2
    return 0;
}