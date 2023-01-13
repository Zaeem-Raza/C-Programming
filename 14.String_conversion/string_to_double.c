#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "   123 Adam";
    char *str2;
    double x = strtod(str, &str2);
    printf("String before conversion is: %s\n", str);
    printf("String After Conversion:\n");
    printf("%.2f and left: %s", x, str2);
}