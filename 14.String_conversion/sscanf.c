#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char date[SIZE];
    int day, month, year;
    printf("Enter a string: ");
    scanf("%[^\n]", date);
    sscanf(date, "%d/%d/%d", &month, &day, &year);
    printf("Month: %d, Day: %d, Year: %d", month, day, year);
    return 0;
}