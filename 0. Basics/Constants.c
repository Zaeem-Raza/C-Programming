#include <stdio.h>
#include <stdlib.h>
void main(){
// constants cannot be changed
const num =8;
printf("%d", num);
num=4; // throws an error bcz the redeclaration of constants
}
