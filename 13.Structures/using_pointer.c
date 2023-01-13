#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
struct students
{
    int roll_number;
    char Name[SIZE];
    int age;
    int marks;
    int status;
};

int main(void)
{
    struct students s[5];
    struct students *Stuptr=s;
    for(int i=0;i<2;i++){
        printf("\nEnter the name of Student %d : ",i+1);
        scanf("%s",Stuptr->Name);
        printf("\nEnter the roll number of Student %d : ",i+1);
        scanf("%d",&Stuptr->roll_number);
        printf("\nEnter the age of Student %d : ",i+1);
        scanf("%d", &Stuptr->age);
        printf("\nEnter the marks of Student %d : ",i+1);
        scanf("%d",&Stuptr->marks);
         if(Stuptr->marks>50){
            Stuptr->status=1;
         }
         else{
            Stuptr->status=0;
         }
        Stuptr++;
    }
    printf("Data covered");
    Stuptr=s;
    for(int j=0;j<2;j++){
        printf("\nStudent %d\t\tName: %s\t\t Roll Number: %d\t\t Age: %d\t\t marks:%d\t\t  Status :%d\n",j+1,Stuptr->Name,Stuptr->roll_number,Stuptr->age,Stuptr->marks,Stuptr->status);
        Stuptr++;
    }
    return 0;
}