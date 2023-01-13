/*Name:            Zaeem Raza
  Roll Number :    BCSF21M022
  Question number: 03*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void Res_Student(int Seats);
void Res_Teacher(int Seats);
void Res_Guest(int Seats);
void Status(int Students, int Teachers, int Guests, int flag1, int flag2, int flag3);
int Cancel(int Students, int Teachers, int Guests, int flag1, int flag2, int flag3);
int main()
{

    // initializing all seats to -1 for the input
    int Students = -1;
    int Guests = -1;
    int Teachers = -1;

    while (Students <= 0)
    {
        printf("Enter the number of seats for students : ");
        scanf("%d", &Students);
    }
    while (Teachers <= 0)
    {
        printf("Enter the number of seats for teachers : ");
        scanf("%d", &Teachers);
    }
    while (Guests <= 0)
    {
        printf("Enter the number of seats for guests : ");
        scanf("%d", &Guests);
    }

    // Displaying The menu
    char user_choice;
    int flag1 = 0, flag2 = 0, flag3 = 0;
    do
    {
        printf("\t\t\t\t\t\t\tWelcome To the University Event Management System");
        printf("\nA)  Reserve a seat for students");
        printf("\nB) Reserve a seat for Teacher");
        printf("\nC) Reserve a seat for Guest");
        printf("\nD) Status Information");
        printf("\nE) Cancel a seat");
        printf("\nF) Exit");
        printf("\n\n\nEnter your choice: ");
        scanf(" %c", &user_choice);
        switch (user_choice)
        {
        case 'A':
            if (flag1 < Students)
            {
                Res_Student(Students);
                flag1++;
            }
            else
            {
                printf("Sorry, No seats available for students\n");
            }
            break;
        case 'B':
            if (flag2 < Teachers)
            {
                Res_Teacher(Teachers);
                flag2++;
            }
            else
            {
                printf("Sorry, No seats available for teachers\n");
            }
            break;
        case 'C':
            if (flag3 < Guests)
            {
                Res_Guest(Guests);
                flag3++;
            }
            else
            {
                printf("Sorry, No seats available for guests\n");
            }
            break;
        case 'D':
            Status(Students, Teachers, Guests, flag1, flag2, flag3);
            break;
        case 'E':
            Cancel(Students, Teachers, Guests, flag1, flag2, flag3);

            break;
        default:
            printf("Invalid Input\n");
            break;
        }

    } while (user_choice != 'F');
}

void Res_Student(int Seats)
{
    static int seat;
    srand(time(NULL));
    char name[Seats][SIZE];
    int ID[Seats];
    int Class[Seats];
    int Index[Seats];
    printf("Enter the name of the student : ");
    scanf(" %[^\n]", name[seat]);
    printf("Enter the ID of the studen : ");
    scanf("%d", &ID[seat]);
    printf("Enter Class(1-12) : ");
    scanf("%d", &Class[seat]);
    Index[seat] = 1 + rand() % 1000;
    printf("The Random Seat number assigned to this student is : %d", Index[seat]);
    printf("\n");
    seat++;
    system("pause");
    system("cls");
}

void Res_Teacher(int Seats)
{
    static int seat;
    srand(time(0));
    char name[Seats][SIZE];
    char Dept[Seats][SIZE];
    int index[Seats];
    printf("Enter the name of The teacher : ");
    scanf(" %[^\n]", name[seat]);
    printf("Enter the department of the teacher: ");
    scanf(" %[^\n]", Dept[seat]);
    index[seat] = 1 + rand() % 1000;
    printf("Random seat number assigned to this teacher is : %d", index[seat]);
    printf("\n");
    seat++;
    system("pause");
    system("cls");
}
void Res_Guest(int Seats)
{
    static int seat;
    srand(time(0));
    char name[Seats][SIZE];
    char Organization[Seats][SIZE];
    int Index[Seats];
    printf("Enter the name of the Guest : ");
    scanf(" %[^\n]", name[seat]);
    printf("Enter Guest's Organization's name : ");
    scanf(" %[^\n]", Organization[seat]);
    Index[seat] = 1 + rand() % 1000;
    printf("The random seat assigned to the guest is : %d", Index[seat]);
    printf("\n");
    seat++;
    system("pause");
    system("cls");
}
void Status(int Students, int Teachers, int Guests, int flag1, int flag2, int flag3)
{
    printf("Total number of seats for students : %d\n", Students);
    printf("Total number of seats for teachers : %d\n", Teachers);
    printf("Total number of seats for guests : %d\n\n\n", Guests);
    printf("Total number of seats reserved for students : %d\n", flag1);
    printf("Total number of seats reserved for teachers : %d\n", flag2);
    printf("Total number of seats reserved for guests : %d\n\n\n", flag3);
    printf("Available seats for students : %d\n", Students - flag1);
    printf("Available seats for teachers : %d\n", Teachers - flag2);
    printf("Available seats for guests : %d\n", Guests - flag3);
    system("pause");
    system("cls");
}
int Cancel(int Students, int Teachers, int Guests, int flag1, int flag2, int flag3)
{
    static int seat;
    printf("Enter the seat number to cancel : ");
    scanf("%d", &seat);
    if (seat <= Students)
    {
        flag1--;
        printf("Seat number %d is cancelled for students\n", seat);
    }
    else if (seat <= Teachers)
    {
        flag2--;
        printf("Seat number %d is cancelled for teachers\n", seat);
    }
    else if (seat <= Guests)
    {
        flag3--;
        printf("Seat number %d is cancelled for guests\n", seat);
    }
    else
    {
        printf("Invalid Seat Number\n");
    }
    system("pause");
    system("cls");
}
