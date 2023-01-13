#include <stdio.h>
#include <stdlib.h>
int main()
{
    const char *string = "-2444adc";
    char *rem = NULL;
    long x = strtol(string, &rem, 0);
    printf("String before conversion is: %s", string);
    printf("String After Conversion:");
    printf("%ld and left: %s", x, rem);
}