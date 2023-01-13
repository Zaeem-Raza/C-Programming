#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
struct student
{
   char name[SIZE];
   int age;
   int roll_number;
   int marks;
};

int main(void)
{
    struct student students[5];
    for(int i=0;i<5;i++){
        printf("\nEnter the name of Student %d : ",i+1);
        scanf("%s",students[i].name);
        printf("\nEnter the roll number of Student %d : ",i+1);
        scanf("%d",&students[i].roll_number);
        printf("\nEnter the age of Student %d : ",i+1);
        scanf("%d", &students[i].age);
        printf("\nEnter the marks of Student %d : ",i+1);
        scanf("%d",&students[i].marks);
    }
    printf("Data covered");
    for(int j=0;j<5;j++){
        printf("\nStudent %d\t\tName: %s\t\t Roll Number: %d\t\t Age: %d\t\t marks:%d\t\t\n",j+1,students[j].name,students[j].roll_number,students[j].age,students[j].marks);
    }
}
  
