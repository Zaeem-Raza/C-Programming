#include <stdio.h>

struct student{
    char name[20];
    int roll;
    float marks;

//          **s1.name = "Rahul"; // This is wrong
//     **s1.roll = 1;            // This is wrong
//     **s1.marks = 99.99;       // This is wrong
//     **using pointers

};


int main(){
    struct student s1;
    /**
     * @brief 
     * * without using pointers
     * 
        /**
   
     */
     
    /*
    printf("Enter the name of student 1:");
    gets(s1.name);
    printf("Enter the roll number of student 1:");
    scanf("%d",&s1.roll);
    printf("Enter the marks of student 1:");
    scanf("%f",&s1.marks);
    printf("Name of student 1: %s\n",s1.name);
    printf("Roll number of student 1: %d\n",s1.roll);
    printf("Marks of student 1:(out of 500) %.2f\n",s1.marks);
    double percent = (s1.marks/500)*100;
    printf("Percentage of student 1: %.2f\n",percent);
*/

    struct student *ptr;
    ptr = &s1;
    printf("Enter name: ");
    scanf("%s",ptr->name);
    printf("Enter roll number: ");
    scanf("%d",&ptr->roll);
    printf("Enter marks: ");
    scanf("%f",&ptr->marks);
    printf("\nDisplaying information");
    printf("\nName: %s",ptr->name);
    printf("\nRoll number: %d",ptr->roll);
    printf("\nMarks: %.1f",ptr->marks);
    double perc = (ptr->marks/500)*100;
    printf("\nPercentage: %.2f",perc);



    return 0;
}