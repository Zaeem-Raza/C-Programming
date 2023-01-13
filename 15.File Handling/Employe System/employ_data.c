#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define strsize 50
struct Employees
{
    int ID;
    char name[strsize];
    char department[strsize];
    int gross_salary;
    int tax_per_cent;
    int net_salary;
};

void update_file(struct Employees *, int);
int main(void)
{
    struct Employees *p;
    FILE *f;
    int size;
    f = fopen("EMPLOYEE.txt", "r");
    fscanf(f, "%d", &size);
    int count = size;
    size += 15;
    printf("SIZE = %d", size);
    p = (struct Employees *)malloc(size * (sizeof(struct Employees)));
    for (int i = 0; i < size; i++)
    {
        fscanf(f, "%d\t%[^\t]\t%[^\t]\t%d\t%d\t%d\n", &(p + i)->ID, (p + i)->name, (p + i)->department, &(p + i)->gross_salary, &(p + i)->tax_per_cent, &(p + i)->net_salary);
    }
    fclose(f);

    int choice = 0;
    while (choice != 7)
    {
        choice = 0;
        // menu
        printf("\n1.Show records.\n");
        printf("2.Add records.\n");
        printf("3.Edit a record.\n");
        printf("4.Delete a record.\n");
        printf("5.Search a record.\n");
        printf("6.Show Status.\n");
        printf("7.EXIT");
        while (!(choice >= 1 && choice <= 7))
        {
            printf("\nSELECT : ");
            scanf("%d", &choice);
        }
        switch (choice)
        {
        case 1:
        {
            printf("%-10s%-30s%-30s%-40s%-40s%-40s\n", "empID", " Name", "Department", "gross_salary", "tax_per_cent", "net_salary");
            for (int i = 0; i < count; i++)
            {
                printf("%-10d%-30s%-30s%-40d%-40d%-40d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
            }
        }
        break;
        case 2:
        {
            int fg = -1;
            printf("Your ID should be unique.\n");
            while (fg != 0)
            {
                printf("Enter the employee's ID : ");
                scanf("%d", &(p + count)->ID);
                for (int i = 0; i < count; i++)
                {
                    if ((p + i)->ID == (p + count)->ID)
                    {
                        fg = 1;
                        break;
                    }
                    fg = 0;
                }
                if (fg == 1)
                {
                    printf("A record with same ID also exists.\n");
                }
            }
            printf("Enter the emplyee's name : ");
            scanf(" %[^\n]", (p + count)->name);
            printf("Enter the employee's department : ");
            scanf(" %[^\n]", (p + count)->department);
            printf("Enter the employee's gross salary : ");
            scanf("%d", &(p + count)->gross_salary);
            printf("Enter the employee's tax per cent : ");
            scanf("%d", &(p + count)->tax_per_cent);
            printf("Enter the employee's net salaray : ");
            scanf("%d", &(p + count)->net_salary);
            count++;
            FILE *f = fopen("EMPLOYEE.txt", "w");
            fprintf(f, "%d\n", count);
            for (int i = 0; i < count; i++)
            {
                fprintf(f, "%d\t%s\t%s\t%d\t%d\t%d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
            }
            fclose(f);
        }
        break;
        case 3:
        {
            int ID;
            printf("Enter the employee's ID to edit the record : ");
            scanf("%d", &ID);
            for (int i = 0; i < count; i++)
            {
                if ((p + i)->ID == ID)
                {
                    printf("Enter the employee's ID : ");
                    scanf("%d", &(p + i)->ID);
                    printf("Enter the emplyee's name : ");
                    scanf(" %[^\n]", (p + i)->name);
                    printf("Enter the employee's department : ");
                    scanf(" %[^\n]", (p + i)->department);
                    printf("Enter the employee's gross salary : ");
                    scanf("%d", &(p + i)->gross_salary);
                    printf("Enter the employee's tax per cent : ");
                    scanf("%d", &(p + i)->tax_per_cent);
                    printf("Enter the employee's net salaray : ");
                    scanf("%d", &(p + i)->net_salary);
                }
            }
            FILE *f = fopen("EMPLOYEE.txt", "w");
            fprintf(f, "%d\n", count);
            for (int i = 0; i < count; i++)
            {
                fprintf(f, "%d\t%s\t%s\t%d\t%d\t%d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
            }
            fclose(f);
        }
        break;
        case 4:
        {
            int ID;
            printf("Enter the employee's ID to delete the record : ");
            scanf("%d", &ID);
            for (int i = 0; i < count; i++)
            {
                if ((p + i)->ID == ID)
                {
                    for (int j = i; j < count; j++)
                    {
                        (p + j)->ID = (p + j + 1)->ID;
                        (p + j)->gross_salary = (p + j + 1)->gross_salary;
                        (p + j)->net_salary = (p + j + 1)->net_salary;
                        strcpy(((p + j)->department), ((p + j + 1)->department));
                        strcpy(((p + j)->name), (p + j + 1)->name);
                    }
                }
            }
            count--;
            FILE *f = fopen("EMPLOYEE.txt", "w");
            fprintf(f, "%d\n", count);
            for (int i = 0; i < count; i++)
            {
                fprintf(f, "%d\t%s\t%s\t%d\t%d\t%d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
            }
            fclose(f);
        }
        break;
        case 5:
        {
            int ID;
            printf("Enter the employee's ID to search in the record : ");
            scanf("%d", &ID);
            for (int i = 0; i < count; i++)
            {
                if ((p + i)->ID == ID)
                {
                    printf("%-10d%-30s%-30s%-40d%-40d%-40d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
                }
            }
        }
        break;
        case 6:
        { // menu
            printf("\n1.Show total number of employees.\n");
            printf("2.Show total number of characters.\n");
            printf("3.Show total number of words.\n");
            printf("4.Show employees of a specific department.\n");
            int sel = 0;
            while (!(sel >= 1 && sel <= 4))
            {
                printf("SELECT : ");
                scanf("%d", &sel);
            }
            switch (sel)
            {
            case 1:
            {
                printf("TOTAL EMPLOYEE'S = %d", count);
            }
            break;
            case 2:
            {
                int character = 0;
                FILE *fc;
                fc = fopen("EMPLOYEE.txt", "r");
                while (!feof(fc))
                {
                    if (fgetc(fc) != '\n' && fgetc(fc) != '\0' && fgetc(fc) != ' ')
                    {
                        character++;
                    }
                }
                fclose(fc);
                printf("TOTAL CHARACTERS = %d", character);
            }
            break;
            case 3:
            {
                FILE *file;
                int countword = 0;
                char ch;
                file = fopen("EMPLOYEE.txt", "r");
                while ((ch = fgetc(file)) != EOF)
                {
                    if (ch == ' ' || ch == '\n')
                        countword++;
                }

                printf("Number of words present in given file: %d", countword);
                fclose(file);
            }
            break;
            case 4:
            {
                printf("Enter the name of department : ");
                char dep[strsize];
                scanf(" %[^\n]", dep);
                for (int i = 0; i < count; i++)
                {
                    if (strcmp(dep, (p + i)->department) == 0)
                    {
                        printf("%-10d%-30s%-30s%-40d%-40d%-40d\n", (p + i)->ID, (p + i)->name, (p + i)->department, (p + i)->gross_salary, (p + i)->tax_per_cent, (p + i)->net_salary);
                    }
                }
            }
            break;
            }
        }
        break;
        }
        system("pause");
        system("cls");
    }
}