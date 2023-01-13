/*

*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define dataSize 30
#define SIZE 30
// prototypes of all required functions
void addCar(int);
void editCar(int, int);
void searchCar(int, int);
void deleteCar(int, int);
void showReport(int);
void showCarMake(int);
void showCarModel(int);
void showCarYear(int);
void searchForNonEmpty(int);
void showStatus(int);
void print(int);
// definitions of structures
struct Date
{
    int date;
    int month;
    int year;
    char day[10];
};
struct car
{
    int srNum;
    char make[SIZE];
    char model[SIZE];
    int year;
    struct Date purchaseDate;
};
// structure array
struct car c[dataSize];
int main(void)
{
    int choice = 0;
    int count = 0;
    while (choice != 11)
    {
        // menu
        printf("1.Add car\n2.Edit Car details using srNum\n3.Search Car Using srNum\n4.Delete Car\n5.Show conplete report\n6.Show Cars of specific make\n7.Show cars of specific models\n8.Show cars with specific years\n9.Search using multiple fields\n10.Show status\n11.EXIT");
        choice = 0;
        while (!(choice >= 1 && choice <= 11))
        {
            printf("\nSELECT : ");
            scanf("%d", &choice);
        }
        // switch on user's choice
        switch (choice)
        {
        case 1:
        {
            addCar(count);
            count++;
        }
        break;
        case 2:
        {
            if (count != 0)
            {
                int sr;
                printf("Enter the srNum : ");
                scanf("%d", &sr);
                editCar(sr, count);
            }
            else
            {
                printf("no data so far");
            }
        }
        break;
        case 3:
        {
            if (count != 0)
            {
                int sr;
                printf("Enter the srNum : ");
                scanf("%d", &sr);
                searchCar(sr, count);
            }
            else
            {
                printf("No data so far");
            }
        }
        break;
        case 4:
        {
            if (count != 0)
            {
                int sr;
                printf("Enter the srNum : ");
                scanf("%d", &sr);
                deleteCar(sr, count);
            }
            else
            {
                printf("No data so far.");
            }
        }
        break;
        case 5:
        {
            if (count != 0)
                showReport(count);
            else
                printf("No data so far.");
        }
        break;
        case 6:
        {
            if (count != 0)
            {

                showCarMake(count);
            }
            else
            {
                printf("No data so far.");
            }
        }
        break;
        case 7:
        {
            if (count != 0)
            {

                showCarModel(count);
            }
            else
            {
                printf("No data so far.");
            }
        }
        break;
        case 8:
        {
            if (count != 0)
            {

                showCarYear(count);
            }
            else
            {
                printf("No data so far.");
            }
        }
        break;
        case 9:
        {
            if (count != 0)
                searchForNonEmpty(count);
            else
                printf("No data so far.");
        }
        break;
        case 10:
        {
            if (count != 0)
            {
                showStatus(count);
            }
            else
            {
                printf("NO data so far.");
            }
        }
        }
        system("pause");
        system("cls");
    }
}
// definitions of required functions
void addCar(int i)
{
    c[i].srNum = -1;
    while (c[i].srNum <= 0)
    {
        printf("Enter the srNum : ");
        scanf("%d", &c[i].srNum);
    }
    printf("Enter its make : ");
    scanf(" %[^\n]", c[i].make);
    printf("Enter the car's model : ");
    scanf(" %[^\n]", c[i].model);
    c[i].year = -1;
    while (c[i].year <= 0)
    {
        printf("Enter the year : ");
        scanf("%d", &c[i].year);
    }
    c[i].purchaseDate.date = 0;
    while (!(c[i].purchaseDate.date >= 1 && c[i].purchaseDate.date <= 31))
    {
        printf("Enter the date of purchase : ");
        scanf("%d", &c[i].purchaseDate.date);
    }
    c[i].purchaseDate.month = 0;
    while (!(c[i].purchaseDate.month >= 1 && c[i].purchaseDate.month <= 12))
    {
        printf("Enter the month of purchase : ");
        scanf("%d", &c[i].purchaseDate.month);
    }
    c[i].purchaseDate.year = 0;
    while (!(c[i].purchaseDate.year > 0))
    {
        printf("Enter the year of purchase : ");
        scanf("%d", &c[i].purchaseDate.year);
    }
    printf("Enter the day of purchase : ");
    scanf(" %[^\n]", c[i].purchaseDate.day);
}
void editCar(int a, int ch)
{
    int i = 0;
    for (int j = 0; j < ch; j++)
    {
        if (c[j].srNum == a)
        {
            addCar(j);
            i++;
        }
    }
    if (i == 0)
    {
        printf("no data with srNum = %d \n", a);
    }
}
void searchCar(int a, int ch)
{
    int i = 0;
    for (int j = 0; j < ch; j++)
    {
        if (c[j].srNum == a)
        {
            if (i == 0)
                printf("%10s%10s%10s%10s%10s%30s\n", "SR.NUM", "MAKE", "MODEL", "YEAR", "DAY", "DATE OF PURCHASE");
            printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[j].srNum, c[j].make, c[j].model, c[j].year, c[j].purchaseDate.day, c[j].purchaseDate.date, c[j].purchaseDate.month, c[j].purchaseDate.year);
            printf("\n\n");
            i++;
        }
    }
}
void showReport(int a)
{
    printf("%10s%10s%10s%10s%10s%30s\n", "SR.NUM", "MAKE", "MODEL", "YEAR", "DAY", "DATE OF PURCHASE");
    for (int i = 0; i < a; i++)
    {
        printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[i].srNum, c[i].make, c[i].model, c[i].year, c[i].purchaseDate.day, c[i].purchaseDate.date, c[i].purchaseDate.month, c[i].purchaseDate.year);
    }
}
void deleteCar(int a, int ch)
{
    for (int j = 0; j < ch; j++)
    {
        if (c[j].srNum == a)
        {
            c[j].srNum = -999;
        }
    }
}
void showCarMake(int ch)
{
    char A[SIZE];
    printf("Enter the make : ");
    scanf(" %[^\n]", A);
    for (int i = 0; i < ch; i++)
    {
        int y = strcmp(c[i].make, A);
        if (y == 0 && c[i].srNum != -999)
        {
            printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[i].srNum, c[i].make, c[i].model, c[i].year, c[i].purchaseDate.day, c[i].purchaseDate.date, c[i].purchaseDate.month, c[i].purchaseDate.year);
            printf("\n\n");
        }
    }
}
void showCarYear(int ch)
{
    int a = -1;
    while (a < 0)
    {
        printf("Enter the year : ");
        scanf("%d", &a);
    }
    for (int j = 0; j < ch; j++)
    {
        if (c[j].year == a)
        {
            printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[j].srNum, c[j].make, c[j].model, c[j].year, c[j].purchaseDate.day, c[j].purchaseDate.date, c[j].purchaseDate.month, c[j].purchaseDate.year);
            printf("\n\n");
        }
    }
}
void showStatus(int ch)
{
    printf("We have data of total %d cars.\n", ch);
    printf("%10s%10s%10s%10s%10s%30s\n", "SR.NUM", "MAKE", "MODEL", "YEAR", "DAY", "DATE OF PURCHASE");
    for (int i = 0; i < ch; i++)
    {
        printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[i].srNum, c[i].make, c[i].model, c[i].year, c[i].purchaseDate.day, c[i].purchaseDate.date, c[i].purchaseDate.month, c[i].purchaseDate.year);
    }
}
void showCarModel(int ch)
{
    char A[SIZE];
    printf("Enter the model : ");
    scanf(" %[^\n]", A);
    for (int i = 0; i < ch; i++)
    {
        int y = strcmp(c[i].model, A);
        if (y == 0)
        {
            printf("%10d%10s%10s%10d\n", c[i].srNum, c[i].make, c[i].model, c[i].year);
            printf("\n\n");
        }
    }
}
void searchForNonEmpty(int ch)
{
    int sr, yr;
    char MK[SIZE];
    char MD[SIZE];
    printf("<---- Enter '00' for non-empty ---->\n");
    printf("Enter the srNum : ");
    scanf("%d", &sr);
    printf("Enter Car's make : ");
    scanf(" %[^\n]", MK);
    printf("Enter Car's Made : ");
    scanf(" %[^\n]", MD);
    printf("Enter the year : ");
    scanf("%d", &yr);
    for (int j = 0; j < ch; j++)
    {
        if (sr != 0 && c[j].srNum == sr)
        {
            if (MK != "00" && strcmp(c[j].make, MK) == 0)
            {
                if (MD != "00" && strcmp(c[j].model, MD) == 0)
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
                else
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                        print(j);
                }
            }
            else
            {
                if (MD != "00" && strcmp(c[j].model, MD) == 0)
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
                else
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
            }
        }
        else
        {
            if (MK != "00" && strcmp(c[j].make, MK) == 0)
            {
                if (MD != "00" && strcmp(c[j].model, MD) == 0)
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
                else
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
            }
            else
            {
                if (MD != "00" && strcmp(c[j].model, MD) == 0)
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                    else
                    {
                        print(j);
                    }
                }
                else
                {
                    if (yr != 0 && yr == c[j].year)
                    {
                        print(j);
                    }
                }
            }
        }
    }
}
void print(int j)
{
    printf("%10d%10s%10s%10d%10s%18d - %-2d - %-4d \n", c[j].srNum, c[j].make, c[j].model, c[j].year, c[j].purchaseDate.day, c[j].purchaseDate.date, c[j].purchaseDate.month, c[j].purchaseDate.year);
}