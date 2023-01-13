#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
struct student {
    int roll;
    char name;
}s[2];
int main(void)
{
    struct student *ptr;
    ptr = s;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of Student %d : ", i + 1);
        scanf("%s", &ptr->name);
        printf("Enter the roll number of Student %d : ", i + 1);
        scanf("%d", &ptr->roll);
        ptr++;
    }
    printf("Data covered");
    ptr = s;
    for (int j = 0; j < 2; j++)
    {
        printf(" Student %d\t\tName: %s\t\t Roll Number: %d\t\t ", j + 1, &ptr->name, ptr->roll); // 
        ptr++; 
}
    return 0;
}