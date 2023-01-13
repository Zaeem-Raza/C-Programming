#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
struct Student{
    char name[SIZE];
    int roll;
    float marks;
}sd[SIZE];

int main(void)
{
    struct Student *p;
    p = (struct Student *)malloc(SIZE * sizeof(struct Student));
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter name :");
        gets(p[i].name);
        printf("Enter roll :");
        scanf("%d", &p[i].roll);
        printf("Enter marks :");
        scanf("%f", &p[i].marks);
        fflush(stdin);   // This is used to clear the buffer of input stream
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("Name :%s \t Roll :%d \t Marks :%f \n", p[i].name, p[i].roll, p[i].marks); 
}
    return 0;
}