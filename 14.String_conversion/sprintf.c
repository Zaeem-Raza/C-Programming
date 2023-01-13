#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char date[SIZE];
   sprintf(date, "%d/%d/%d", 12, 31, 2018);
    printf("Date: %s", date);
    
    return 0;
}