#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 0; // global variable
typedef struct purchaseDate
{
    int month;
    int day;
    int year;
} Date;
struct car
{
    int srNum;
    char make[20];
    char model[30];
    int year;
    Date purchaseDate; // a structure containing day of week,date,month, and year
};
void addCar(struct car *carPtr);
void editCar(struct car *carPtr);
void searchCar(struct car *carPtr);
void deleteCar(struct car *carPtr);
void showReport(struct car *carPtr);
void showMake(struct car *carPtr);
void showModel(struct car *carPtr);
void showYear(struct car *carPtr);
void searchMultiple(struct car *carPtr);
void showStatus(struct car *carPtr);

int main(void)
{
    int choice;
    struct car cars[10];
    struct car *carPtr = cars;
    do
    {
        printf("1.Add car\n");
        printf("2.Edit car details\n");
        printf("3.Search car using srnum\n");
        printf("4.Delete car using srnum\n");
        printf("5.Show complete report\n");
        printf("6.Show cars of specific make\n");
        printf("7.Show cars of specific model\n");
        printf("8.Show cars with specific year\n");
        printf("9.Search using multiple fields\n");
        printf("10.Show status\n");
        printf("11.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addCar(carPtr);

            break;
        case 2:
            editCar(carPtr);

            break;
        case 3:
            searchCar(carPtr);

            break;
        case 4:
            deleteCar(carPtr);

            break;
        case 5:
            showReport(carPtr);
            break;
        case 6:
            showMake(carPtr);
            break;
        case 7:
            showModel(carPtr);
            break;
        case 8:
            showYear(carPtr);
            break;
        case 9:
            searchMultiple(carPtr);
            break;
        case 10:
            showStatus(carPtr);
            break;
        default:
            printf("Invalid choice\n");
        }

    } while (choice != 11);
    return 0;
}

void addCar(struct car *carPtr)
{
    printf("Enter the Serial Number\n");
    scanf("%d", &carPtr[i].srNum);
    while (carPtr[i].srNum < 0)
    {
        printf("Invalid Serial Number\n");
        printf("Enter the Serial Number\n");
        scanf("%d", &carPtr[i].srNum);
    }
    printf("Enter the make\n");
    scanf("%s", carPtr[i].make);
    printf("Enter the model\n");
    scanf("%s", carPtr[i].model);
    printf("Enter the year\n");
    scanf("%d", &carPtr[i].year);
    while (carPtr[i].year < 0)
    {
        printf("Invalid year\n");
        printf("Enter the year\n");
        scanf("%d", &carPtr[i].year);
    }
    printf("Enter the purchase date (day/month/year)\n");
    scanf("%d/%d/%d", &carPtr[i].purchaseDate.day, &carPtr[i].purchaseDate.month, &carPtr[i].purchaseDate.year);
    while (carPtr[i].purchaseDate.day < 0 || carPtr[i].purchaseDate.day > 31 || carPtr[i].purchaseDate.month < 0 || carPtr[i].purchaseDate.month > 12 || carPtr[i].purchaseDate.year < 0)
    {
        printf("Invalid date\n");
        printf("Enter the purchase date (day/month/year)\n");
        scanf("%d/%d/%d", &carPtr[i].purchaseDate.day, &carPtr[i].purchaseDate.month, &carPtr[i].purchaseDate.year);
    }

    i++;
    printf("Car added successfully\n");
    system("pause");
    system("cls");
}
void editCar(struct car *carPtr)
{
    int srnum;
    int choice;
    int flag = 0;
    printf("Enter the srnum of the car you want to edit\n");
    scanf("%d", &srnum);
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].srNum == srnum)
        {
            flag = 1;
            printf("1.Edit srnum\n");
            printf("2.Edit make\n");
            printf("3.Edit model\n");
            printf("4.Edit year\n");
            printf("5.Edit purchase date\n");
            printf("Enter your choice\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the srnum\n");
                scanf("%d", &carPtr[j].srNum);
                while (carPtr[j].srNum < 0)
                {
                    printf("Invalid srnum\n");
                    printf("Enter the srnum\n");
                    scanf("%d", &carPtr[j].srNum);
                }
                break;
            case 2:
                printf("Enter the make\n");
                scanf("%s", carPtr[j].make);
                break;
            case 3:
                printf("Enter the model\n");
                scanf("%s", carPtr[j].model);
                break;
            case 4:
                printf("Enter the year\n");
                scanf("%d", &carPtr[j].year);
                while (carPtr[j].year < 0)
                {
                    printf("Invalid year\n");
                    printf("Enter the year\n");
                    scanf("%d", &carPtr[j].year);
                }
                break;
            case 5:
                printf("Enter the purchase date (day/month/year)\n");
                scanf("%d/%d/%d", &carPtr[j].purchaseDate.day, &carPtr[j].purchaseDate.month, &carPtr[j].purchaseDate.year);
                while (carPtr[j].purchaseDate.day < 0 || carPtr[j].purchaseDate.day > 31 || carPtr[j].purchaseDate.month < 0 || carPtr[j].purchaseDate.month > 12 || carPtr[j].purchaseDate.year < 0)
                {
                    printf("Invalid date\n");
                    printf("Enter the purchase date (day/month/year)\n");
                    scanf("%d/%d/%d", &carPtr[j].purchaseDate.day, &carPtr[j].purchaseDate.month, &carPtr[j].purchaseDate.year);
                }
                break;
            default:
                printf("Invalid choice\n");
            }
        }
    }
    if (flag == 0)
    {
        printf("Car not found\n");
    }
    else
    {
        printf("Car edited successfully\n");
    }
    system("pause");
    system("cls");
}

void searchCar(struct car *carPtr)
{
    int srnum;
    int flag = 0;
    printf("Enter the srnum of the car you want to search\n");
    scanf("%d", &srnum);
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].srNum == srnum)
        {
            flag = 1;
            printf("Srnum: %d\n", carPtr[j].srNum);
            printf("Make: %s\n", carPtr[j].make);
            printf("Model: %s\n", carPtr[j].model);
            printf("Year: %d\n", carPtr[j].year);
            printf("Purchase date: %d/%d/%d\n", carPtr[j].purchaseDate.day, carPtr[j].purchaseDate.month, carPtr[j].purchaseDate.year);
        }
    }
    if (flag == 0)
    {
        printf("Car not found\n");
    }
    system("pause");
    system("cls");
}

void deleteCar(struct car *carPtr)
{
    int srnum;
    int flag = 0;
    printf("Enter the srnum of the car you want to delete\n");
    scanf("%d", &srnum);
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].srNum == srnum)
        {
            flag = 1;
            carPtr[j].srNum = -999;
            carPtr[j].make[0] = '\0';
            carPtr[j].model[0] = '\0';
            carPtr[j].year = -999;
            carPtr[j].purchaseDate.day = -999;
            carPtr[j].purchaseDate.month = -999;
            carPtr[j].purchaseDate.year = -999;
        }
    }
    if (flag == 0)
    {
        printf("Car not found\n");
    }
    else
    {
        printf("Car deleted successfully\n");
    }
    system("pause");
    system("cls");
}

void showReport(struct car *carPtr)
{
    int flag = 0;
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].srNum != -999)
        {
            flag = 1;
            printf("\n");
            printf("Serial number\t\tMake\t\tModel\t\tYear\t\tPurchase date\n");
            printf("\n");
            printf("%d\t\t\t%s\t\t%s\t\t%d\t\t%d/%d/%d\n", carPtr[j].srNum, carPtr[j].make, carPtr[j].model, carPtr[j].year, carPtr[j].purchaseDate.day, carPtr[j].purchaseDate.month, carPtr[j].purchaseDate.year);
        }
    }
    if (flag == 0)
    {
        printf("No cars found\n");
    }
    system("pause");
    system("cls");
}

void showMake(struct car *carPtr)
{

    char make[20];
    printf("Enter the make of the car you want to search\n");
    scanf("%s", make);
    int flag = 0;
    for (int j = 0; j < i; j++)
    {
        if (strcmp(carPtr[j].make, make) == 0)
        {
            flag = 1;
            printf("Srnum: %d\n", carPtr[j].srNum);
            printf("Make: %s\n", carPtr[j].make);
            printf("Model: %s\n", carPtr[j].model);
            printf("Year: %d\n", carPtr[j].year);
            printf("Purchase date: %d/%d/%d\n", carPtr[j].purchaseDate.day, carPtr[j].purchaseDate.month, carPtr[j].purchaseDate.year);
        }
    }
    if (flag == 0)
    {
        printf("No cars found\n");
    }
    system("pause");
    system("cls");
}
void showModel(struct car *carPtr)
{
    char model[20];
    printf("Enter the model of the car you want to search\n");
    scanf("%s", model);
    int flag = 0;
    for (int j = 0; j < i; j++)
    {
        if (strcmp(carPtr[j].model, model) == 0)
        {
            flag = 1;
            printf("Srnum: %d\n", carPtr[j].srNum);
            printf("Make: %s\n", carPtr[j].make);
            printf("Model: %s\n", carPtr[j].model);
            printf("Year: %d\n", carPtr[j].year);
            printf("Purchase date: %d/%d/%d\n", carPtr[j].purchaseDate.day, carPtr[j].purchaseDate.month, carPtr[j].purchaseDate.year);
        }
    }
    if (flag == 0)
    {
        printf("No cars found\n");
    }
    system("pause");
    system("cls");
}
void showYear(struct car *carPtr)
{
    int year;
    int flag = 0;
    printf("Enter the year of the car you want to search\n");
    scanf("%d", &year);
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].year == year)
        {
            flag = 1;
            printf("Srnum: %d\n", carPtr[j].srNum);
            printf("Make: %s\n", carPtr[j].make);
            printf("Model: %s\n", carPtr[j].model);
            printf("Year: %d\n", carPtr[j].year);
            printf("Purchase date: %d/%d/%d\n", carPtr[j].purchaseDate.day, carPtr[j].purchaseDate.month, carPtr[j].purchaseDate.year);
        }
    }
    if (flag == 0)
    {
        printf("No cars found\n");
    }
    system("pause");
    system("cls");
}
void searchMultiple(struct car *carPtr)
{
    int choice;
    printf("1. Make\n");
    printf("2. Model\n");
    printf("3. Year\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        showMake(carPtr);
        break;
    case 2:
        showModel(carPtr);
        break;
    case 3:
        showYear(carPtr);
        break;
    default:
        printf("Invalid choice\n");
    }
}
void showStatus(struct car *carPtr)
{
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (carPtr[j].srNum != -999)
        {
            count++;
        }
    }
   
   
    printf("Total number of cars: %d\n", i);
    system("pause");
    system("cls");
}
