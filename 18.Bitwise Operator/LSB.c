#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    /**
     * *We use Bitwise AND & operator to check status of any bit. Bitwise AND & operator evaluate each bit of the resultant value as 1, if corresponding bits of both operands are 1.

To check LSB of a number we need to perform bitwise ANDing. The bitwise AND operation number & 1 will evaluate to 1 if LSB of number is set i.e. 1 otherwise evaluates to 0.
    */

int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num&1){
    printf("The LSB is (1)");
   }
   else{
    printf("The LSB is (0)");
   }
    return 0;
}