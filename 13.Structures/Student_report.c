#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
struct Student
{
    unsigned int Roll_no;
    char name[SIZE];
    float gpa;
};

void Input(struct Student *sptr, int n);
void Display(struct Student *sptr, int n);
float Gradepoint();
float GPA(float per);
int main(void)
{
    int no; // number of students
    printf("Enter the number of Students in the class : ");
    scanf("%d", &no);
    while (no < 0)
    {
        printf("Enter the number of Students in the class : ");
        scanf("%d", &no);
    }
    struct Student s[no];     // array of structures
    struct Student *sptr = s; // pointer to structure
    Input(sptr, no);
    Display(sptr, no);

    return 0;
}

void Input(struct Student *sptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Roll number of the Student: %d : ", i + 1);
        scanf("%d", &sptr->Roll_no);
        while (sptr->Roll_no < 0)
        {
            printf("Enter the Roll number of the Student: %d : ", i + 1);
            scanf("%d", &sptr->Roll_no);
        }
        printf("Enter the name of Student: %d : ", i + 1);
        scanf("%s", sptr->name);
        sptr->gpa = Gradepoint();
        sptr++;
    }
}
void Display(struct Student *sptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\t\t Name: %s \t\t Gpa: %.2f", sptr->Roll_no, sptr->name, sptr->gpa);
        sptr++;
    }
}
float Gradepoint()
{
    int marks[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) // assuming there are 5 subjects
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        while (marks[i] > 100 || marks[i] < 0)
        {
            printf("Invalid marks, Enter again: ");
            scanf("%d", &marks[i]);
        }
        sum += marks[i];
    }
    float per = (float)sum / 5;
    float gpa = GPA(per);
    return gpa;
}
float GPA(float per)
{
    float gpa;
    if (per >= 85)
    {
        gpa = 4.0;
    }
    else if (per >= 80)
    {
        gpa = 3.5;
    }
    else if (per >= 70)
    {
        gpa = 3.0;
    }
    else if (per >= 65)
    {
        gpa = 2.7;
    }
    else if (per >= 60)
    {
        gpa = 2.3;
    }
    else if (per >= 50)
    {
        gpa = 1.0;
    }
    else
    {
        gpa = 0.0;
    }
    return gpa;
}
