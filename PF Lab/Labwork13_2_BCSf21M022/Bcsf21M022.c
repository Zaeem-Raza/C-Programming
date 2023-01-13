#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
struct Employee
{
    unsigned int empID;
    char Name[SIZE];
    char Department[SIZE];
    int gross_salary;
    int tax_per_cent;
    int net_salary;
};
int main(void)
{
    int employ;
    int words = 0;
    int chars = 0;
    int count2 = 0;
    char dpt[SIZE];
    char c;
    int n;
    FILE *f1;
    FILE *f2;
    f1 = fopen("file.txt", "r");
    f2 = fopen("file.txt", "a");
    int inputs;
    fscanf(f1, "%d", &inputs);
    int y = inputs + 15;
    int *p;
    p = (struct Employee *)malloc(y * sizeof(struct Employee));
    // declare a pointer to the structure
    struct Employee *ptr;
    // assign the address of the first element of the array to the pointer
    ptr = p;
    for (int i = 0; i < inputs; i++)
    {
        // read data from file
        char str1[SIZE];
        char str2[SIZE];
        char str3[SIZE];
        char str4[SIZE];
        // fscanf(f1, "%s %s %s %s  %d %d %d\n", str1, str2, str3, str4);
        fscanf(f1, "%d  %s %s %s %s %d %d %d\n", &(ptr + i)->empID, str1, str2, str3, str4, &(ptr + i)->gross_salary, &(ptr + i)->tax_per_cent, &(ptr + i)->net_salary);
        // concatenate the strings
        strcat(str1, str2);
        strcpy((ptr + i)->Name, str1);
        strcat(str3, str4);
        strcpy((ptr + i)->Department, str3);
        printf("\n%d %s %s %d %d %d", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
        n++;
    }
    fclose(f1);
    int choice;
    do
    {
        printf("\n1.Add new employee\n2.Search and Edit\n3.Delete\n4.Display\n5.Show Status\n6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of employees to be added:");
            scanf("%d", &employ);
            for (int i = inputs; i < inputs + employ; i++)
            {
                printf("Enter the employee ID:");
                scanf("%d", &(ptr + i)->empID);
                // unique id
                //  for (int j = 0; j < inputs + employ; j++)
                //  {
                //      while ((ptr + i)->empID == (ptr + j)->empID)
                //      {
                //          printf("Employee ID already exists");
                //          printf("Enter the employee ID:");
                //          scanf("%d", &(ptr + i)->empID);
                //      }
                //  }
                printf("Enter the employee name:");
                scanf("%s", (ptr + i)->Name);
                printf("Enter the employee department:");
                scanf("%s", (ptr + i)->Department);
                printf("Enter the employee gross salary:");
                scanf("%d", &(ptr + i)->gross_salary);
                printf("Enter the employee tax percentage:");
                scanf("%d", &(ptr + i)->tax_per_cent);
                (ptr + i)->net_salary = (ptr + i)->gross_salary - ((ptr + i)->gross_salary * (ptr + i)->tax_per_cent) / 100;
                printf("\n%d %s %s %d %d %d", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
                n++;
            }
            inputs = inputs + employ;
            f2 = fopen("file.txt", "w");
            for (int i = 0; i < inputs + employ; i++)
            {
                fprintf(f2, "%d %s %s %d %d %d\n", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
            }
            fclose(f2);
            inputs = inputs + employ;
            system("pause");
            system("cls");
            break;
        case 2:
            printf("Enter the employee ID to be searched:");
            int search;
            scanf("%d", &search);
            for (int i = 0; i < inputs; i++)
            {
                if (search == (ptr + i)->empID)
                {
                    printf("Enter the employee name:");
                    scanf("%s", (ptr + i)->Name);
                    printf("Enter the employee department:");
                    scanf("%s", (ptr + i)->Department);
                    printf("Enter the employee gross salary:");
                    scanf("%d", &(ptr + i)->gross_salary);
                    printf("Enter the employee tax percentage:");
                    scanf("%d", &(ptr + i)->tax_per_cent);
                    (ptr + i)->net_salary = (ptr + i)->gross_salary - ((ptr + i)->gross_salary * (ptr + i)->tax_per_cent) / 100;
                    printf("\n%d %s %s %d %d %d", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
                    // a
                    f2 = fopen("file.txt", "w");
                    for (int i = 0; i < inputs + employ; i++)
                    {
                        fprintf(f2, "%d %s %s %d %d %d\n", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
                    }
                }
            }
            system("pause");
            system("cls");
            break;
        case 3:
            printf("\nEnter the employee ID to be deleted:");
            int del;
            scanf("%d", &del);
            for (int i = 0; i < inputs; i++)
            {
                if (del == (ptr + i)->empID)
                {
                    for (int j = i; j < inputs; j++)
                    {
                        (ptr + j)->empID = (ptr + j + 1)->empID;
                        strcpy((ptr + j)->Name, (ptr + j + 1)->Name);
                        strcpy((ptr + j)->Department, (ptr + j + 1)->Department);
                        (ptr + j)->gross_salary = (ptr + j + 1)->gross_salary;
                        (ptr + j)->tax_per_cent = (ptr + j + 1)->tax_per_cent;
                        (ptr + j)->net_salary = (ptr + j + 1)->net_salary;
                    }
                    inputs--;
                }
            }
            printf("\nRecord Deleted\n");
            ;
            // modify file txt
            f2 = fopen("file.txt", "w");
            for (int i = 0; i < inputs; i++)
            {
                fprintf(f1, "%d %s %s %d %d %d\n", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
            }
            system("pause");
            system("cls");
            break;
        case 4:
            for (int i = 0; i < inputs; i++)
            {
                printf("\n%d %s %s %d %d %d", (ptr + i)->empID, (ptr + i)->Name, (ptr + i)->Department, (ptr + i)->gross_salary, (ptr + i)->tax_per_cent, (ptr + i)->net_salary);
            }
            break;
            system("pause");
            system("cls");
        case 5:
            // number of employees
            printf("\nNumber of employees: %d", n);
            // words in input file

            f1 = fopen("file.txt", "r");
            while ((c = fgetc(f1)) != EOF)
            {
                if (c == ' ' || c == ' ')
                {
                    words++;
                }
            }
            // count chars in input file
            f1 = fopen("file.txt", "r");
            while ((c = fgetc(f1)) != EOF)
            {
                chars++;
            }

            printf("\nNumber of words in input file: %d", words);
            printf("\nNumber of characters in input file: %d", chars);
            printf("Enter the name of department to be searched:");
            gets(dpt);
            for (int i = 0; i < inputs; i++)
            {
                if (strcmp(dpt, (ptr + i)->Department) == 0)
                {
                    count2++;
                }
            }
            printf("\nNumber of employees in %s department: %d", dpt, count2);
            system("pause");
            system("cls");
            break;
        case 6:
            printf("Bye");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice != 6);
    free(ptr);
    fclose(f1);
    fclose(f2);
}