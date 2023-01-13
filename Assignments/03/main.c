/**
 *  *Name                Zaeem Raza
 *  *Student ID         BCSF21M022
 *  *Fall               CS-F21
 *  *Subject            Programming Fundamentals
 *  *Assignment         Assignment 3
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 100

// structure for the Medicines
struct Medicine
{
    char Id[SIZE];
    char name[SIZE];
    char potency[SIZE];
    char manufactured_by[SIZE];
    unsigned int total_units_available;
} Med[50];

// structure for Supplier
struct Supplier
{
    char Id[SIZE];
    char company_name[SIZE];
    char rep_name[SIZE];
    char address[SIZE];
    char description[SIZE];
    char date[SIZE];
} Sup[30];

struct Sale
{
    int Invoice_no;
    char date[SIZE];
    char med_id[SIZE];
    char med_name[SIZE];
    char med_potency[SIZE];
    int med_quantity;
    float price_per_unit;
    float total_price;
    float discount;
    float net_bill;

} Sal[50];

struct Purchase
{
    int Invoice_no;
    char date[SIZE];
    char med_id[SIZE];
    char Supp_id[SIZE];
    char med_name[SIZE];
    int med_quantity;
    float price_per_unit;
    float total_price;
    float net_bill;

} Pur[50];

// Function Prototypes

// for Medicine
void displayMedicine(struct Medicine Med[], int n);
int addMedicine(struct Medicine Med[], int n);
void searchMedicine(struct Medicine Med[], int n);
void editMedicine(struct Medicine Med[], int n);
int deleteMedicine(struct Medicine Med[], int n);

// for Supplier
void displaySupplier(struct Supplier Sup[], int m);
int addSupplier(struct Supplier Sup[], int m);
void searchSupplier(struct Supplier Sup[], int m);
void editSupplier(struct Supplier Sup[], int m);
int deleteSupplier(struct Supplier Sup[], int m);

// Sale Invoice
void displaySaleInvoice(struct Sale Sal[], int k);
void buyMedicine(struct Medicine Med[], int n);

// Purchase Invoice
void purchaseMedicine(struct Medicine Med[], int n, struct Supplier Sup[], int m);
void displayPurchaseInvoice(struct Purchase PUR[], int k);

// Main Function
int main(void)
{
    FILE *f1; // for Medicine
    f1 = fopen("Medicine.txt", "r");
    if (f1 == NULL)
    {
        printf("Error opening file Medicine.txt  ");
        exit(1);
    }
    int n = 10; // number of medicines in the text file
    int m = 5;  // number of Supplier in the file
    FILE *f2;   // for Supplier
    f2 = fopen("Supplier.txt", "r");
    if (f2 == NULL)
    {
        printf("Error opening file Supplier.txt  ");
        exit(1);
    }
    FILE *f3; // for Sale
    FILE *f4; // for Purchase

    int count; // no of lines
    char c;    // each character
    count = 0;
    for (int i = 0; i < n; i++)
    {
        fscanf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, &Med[i].total_units_available);
    }
    fclose(f1);

    // reading Supplier from the file
    for (int i = 0; i < m; i++)
    {
        fscanf(f2, "%s %s %s %s %s %s", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
    }
    fclose(f2);
    char ch;
    int choice[10]; // choices of the user
    do
    {

        printf("\033[1;31m"); // set text color to red
        printf("\n1\tAdd Search Delete Edit \n2\tSale Invoice \n3\tPurchase Invoice \n4\tExit\n");
        printf("\033[1;33m"); // set color to yellow and background to blue
        printf("\n\t\tEnter your choice: ");
        printf("\033[0m"); // reset color
        scanf("%d", &choice[0]);
        switch (choice[0])
        {
        case 1:                   // add search delete edit
            printf("\033[1;34m"); // set color to blue
            printf("\n1\tMedicine\n2\tSupplier\n3\tExit\n");
            printf("\033[1;33m"); // set color to yellow
            printf("\n\t\tEnter your choice: ");
            printf("\033[0m"); // reset color
            scanf("%d", &choice[1]);
            switch (choice[1])
            {
            case 1: // Medicine

                do
                {

                    printf("\033[1;35m"); // set color to magenta
                    printf("\n0\tDisplay Medicines \n1\tAdd Medicine\n2\tSearch Medicine\n3\tEdit Medicine\n4\tDelete Medicine\n");

                    printf("\033[1;33m"); // ser color to yellow
                    printf("\nEnter the choice: ");

                    printf("\033[0m"); // reset color
                    scanf("%d", &choice[2]);
                    switch (choice[2])
                    {
                    case 0: // display
                        displayMedicine(Med, n);
                        break;
                    case 1: // add

                        n = addMedicine(Med, n);
                        printf("\n\t\t\tMedicine added successfully\n");

                        // update file
                        f1 = fopen("Medicine.txt", "w");
                        for (int i = 0; i < n; i++)
                        {
                            fprintf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
                            fprintf(f1, "\n");
                        }
                        fclose(f1);
                        break;
                    case 2: // search
                        searchMedicine(Med, n);
                        break;
                    case 3: // edit
                        editMedicine(Med, n);
                        f1 = fopen("Medicine.txt", "w");
                        for (int i = 0; i < n; i++)
                        {
                            fprintf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
                            fprintf(f1, "\n");
                        }
                        fclose(f1);
                        break;
                    case 4:
                        n = deleteMedicine(Med, n); // delete
                        f1 = fopen("Medicine.txt", "w");
                        for (int i = 0; i < n; i++)
                        {
                            fprintf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
                            fprintf(f1, "\n");
                        }
                        fclose(f1);
                        break;

                    default:
                        printf("Invalid choice");
                    } // termination of switch case 2

                    printf("\nDo you want to continue? (y/n): ");
                    scanf(" %c", &ch);
                } while (ch == 'y');

                break;
            case 2: // Supplier
                do
                {
                    printf("0\tDisplay Supplier\n1\tAdd Supplier\n2\tSearch Supplier\n3\tEdit Supplier\n4\tDelete Supplier\n5\tExit\n");
                    printf("\n\t\tEnter your choice: ");
                    scanf("%d", &choice[2]);
                    switch (choice[2])
                    {
                    case 0:
                        displaySupplier(Sup, m);
                        break;
                    case 1: // add
                        m = addSupplier(Sup, m);
                        printf("\n\t\t\tSupplier added successfully\n");

                        // update file
                        f2 = fopen("Supplier.txt", "w");
                        for (int i = 0; i < m; i++)
                        {
                            fprintf(f2, "%s %s %s %s %s %s", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
                            fprintf(f2, "\n");
                        }
                        fclose(f2);
                        break;
                    case 2: // search
                        searchSupplier(Sup, m);
                        break;
                    case 3: // edit
                        editSupplier(Sup, m);
                        f2 = fopen("Supplier.txt", "w");
                        for (int i = 0; i < m; i++)
                        {
                            fprintf(f2, "%s %s %s %s %s %s", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
                            fprintf(f2, "\n");
                        }
                        fclose(f2);
                        break;
                    case 4:
                        m = deleteSupplier(Sup, m); // delete
                        f2 = fopen("Supplier.txt", "w");
                        for (int i = 0; i < m; i++)
                        {
                            fprintf(f2, "%s %s %s %s %s %s", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
                            fprintf(f2, "\n");
                        }
                        fclose(f2);
                        break;
                    case 5:
                        break;
                    default:
                        printf("Invalid choice");
                        // termination of switch case 2
                    } // termination of switch case 1
                } while (choice[2] != 5);
                break;
            case 3:
                break;
            default:
                printf("Invalid choice");
            }
            break; // termination of switch case 1

        case 2: // Sale Invoice

            do
            {
                printf("\033[1;34m"); // set color to blue
                printf("\n1\tBuy Medicines\n2\tPrint Sale Invoice\n3\tExit\n");
                printf("\033[1;33m"); // set color to yellow
                printf("\n\t\tEnter your choice: ");

                scanf("%d", &choice[1]);
                switch (choice[1])
                {
                case 1:
                    displayMedicine(Med, n);
                    buyMedicine(Med, n);
                    // update Medicine.txt
                    f1 = fopen("Medicine.txt", "w");
                    for (int i = 0; i < n; i++)
                    {
                        fprintf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
                        fprintf(f1, "\n");
                    }
                    fclose(f1);

                    break;
                case 2:
                    // count number of lines in sale.txt
                    f3 = fopen("Sale.txt", "r");
                    for (c = getc(f3); c != EOF; c = getc(f3))
                        if (c == '\n') // Increment count if this character is newline
                            count = count + 1;
                    fclose(f3);
                    displaySaleInvoice(Sal, count);
                    break;
                }
            } while (choice[1] != 3);
            break;

        case 3: // purchase

            do
            {
                printf("\033[1;34m"); // set color to blue
                printf("\n1\tPurchase Medicines\n2\tPrint Purchase Invoice\n3\tExit\n");
                printf("\033[1;33m"); // set color to yellow
                printf("\n\t\tEnter your choice: ");
                scanf("%d", &choice[1]);

                switch (choice[1])
                {

                case 1: // purchase medicines
                    purchaseMedicine(Med, n, Sup, m);
                    // update the Medicine.txt file
                    f1 = fopen("Medicine.txt", "w");
                    for (int i = 0; i < n; i++)
                    {
                        fprintf(f1, "%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
                        fprintf(f1, "\n");
                    }
                    fclose(f1);
                    break;
                case 2: // print purchase invoice
                        // count number of lines in purchase.txt
                    f4 = fopen("Purchase.txt", "r");
                    for (c = getc(f4); c != EOF; c = getc(f4))
                        if (c == '\n') // Increment count if this character is newline
                            count = count + 1;
                    fclose(f4);
                    displayPurchaseInvoice(Pur, count);
                    break;
                case 3:
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }
            } while (choice[1] != 3);
            break;
        case 4:
            printf("\033[1;32m"); // set color to green
            printf("Thank you for using our system\n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice[0] != 4);
    printf("\033[0m"); // reset color
    return 0;
}

// Function bodies

void displayMedicine(struct Medicine Med[], int n)
{

    printf("\033[4;35m"); // set color to magenta and underline
    for (int i = 0; i < n; i++)
    {
        printf("\n%s %s %s %s %d", Med[i].Id, Med[i].name, Med[i].potency, Med[i].manufactured_by, Med[i].total_units_available);
        printf("\n");
    }

    printf("\033[0m"); // reset color
}
// Medicines
int addMedicine(struct Medicine Med[], int n)
{
    int y;
    printf("How many medicines do you want to add?");
    scanf("%d", &y);
    int x = y + n;
    for (int i = n; i < x; i++)
    {
        printf("Enter the Id of the medicine: %d : ", i + 1);
        scanf("%s", Med[i].Id);
        // validation for unique id
        for (int j = 0; j < i; j++)
        {
            if (strcmp(Med[i].Id, Med[j].Id) == 0)
            {
                printf("Id already exists. Enter a new Id: ");
                scanf("%s", Med[i].Id);
            }
        }
        printf("Enter the name of the medicine: %d ", i + 1);
        scanf("%s", Med[i].name);
        // validation for unique name
        for (int j = 0; j < i; j++)
        {
            if (strcmp(Med[i].name, Med[j].name) == 0)
            {
                printf("Name already exists. Enter a new name: ");
                scanf("%s", Med[i].name);
            }
        }
        printf("Enter the potency of the medicine: %d ", i + 1);
        scanf("%s", Med[i].potency);
        printf("Enter the manufacturer of the medicine %d : ", i + 1);
        scanf("%s", Med[i].manufactured_by);
        printf("Enter the total units available of the medicine %d : ", i + 1);
        scanf("%d", &Med[i].total_units_available);
    }
    displayMedicine(Med, x);
    return x;
}
void searchMedicine(struct Medicine Med[], int n)
{

    printf("\033[4;35m"); // set color to magenta and underline
    int i;
    char search[SIZE];
    int flag = 0;
    printf("Enter the name of the medicine to be searched: ");
    scanf("%s", search);
    for (i = 0; i < n; i++)
    {
        if (strcmp(search, Med[i].name) == 0)
        {
            flag = 1;
            printf("The Id of the medicine is: %s \n", Med[i].Id);
            printf("The name of the medicine is: %s \n", Med[i].name);
            printf("The potency of the medicine is: %s \n", Med[i].potency);
            printf("The manufacturer of the medicine is: %s \n", Med[i].manufactured_by);
            printf("The total units available of the medicine is: %d \n", Med[i].total_units_available);
        }
    }
    if (flag == 0)
    {
        printf("Medicine not found");
    }
    
    printf("\033[0m"); // reset color
    system("pause");
    system("cls");
}
void editMedicine(struct Medicine Med[], int n)
{
    int i;
    char search[SIZE];
    int flag = 0;
    displayMedicine(Med, n);
    printf("Enter the name of the medicine to be edited: ");
    scanf("%s", search);
    for (i = 0; i < n; i++)
    {
        if (strcmp(search, Med[i].name) == 0)
        {
            flag = 1;
            printf("Enter the Id of the medicine: ");
            scanf("%s", Med[i].Id);
            printf("Enter the name of the medicine: ");
            scanf("%s", Med[i].name);
            printf("Enter the potency of the medicine: ");
            scanf("%s", Med[i].potency);
            printf("Enter the manufacturer of the medicine: ");
            scanf("%s", Med[i].manufactured_by);
            printf("Enter the total units available of the medicine: ");
            scanf("%d", &Med[i].total_units_available);
        }
    }
    if (flag == 0)
    {
        printf("\nMedicine not found\n");
    }
}
int deleteMedicine(struct Medicine Med[], int n)
{
    int i, j;
    char search[SIZE];
    displayMedicine(Med, n);
    printf("Enter the name of the medicine to be deleted: ");
    scanf("%s", search);
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(search, Med[i].name) == 0)
        {
            flag = 1;
            for (j = i; j < n; j++)
            {
                strcpy(Med[j].Id, Med[j + 1].Id);
                strcpy(Med[j].name, Med[j + 1].name);
                strcpy(Med[j].potency, Med[j + 1].potency);
                strcpy(Med[j].manufactured_by, Med[j + 1].manufactured_by);
                Med[j].total_units_available = Med[j + 1].total_units_available;
            }
        }
    }
    if (flag == 1)
    {
        printf("The medicine has been deleted successfully");
        displayMedicine(Med, n - 1);
        return n - 1;
    }
    else
    {
        printf("The medicine does not exist");
    }
}

void displaySupplier(struct Supplier Sup[], int m)
{
    // set color to yellow
    printf("\033[1;33m");
    int i;
    for (i = 0; i < m; i++)
    {
        printf(" %2s\t\t%4s\t\t%5s\t\t%20s\t\t%20s\t\t%5s\t\t \n", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
    }
    // reset color
    printf("\033[0m");
}
int addSupplier(struct Supplier Sup[], int m)
{
    int i;
    // set color to blue
    printf("\033[1;34m");
    printf("Enter the details of the Supplier: \n");
    printf("Enter the ID: ");
    scanf("%s", Sup[m].Id);
    // validate unique id
    for (i = 0; i < m; i++)
    {
        if (strcmp(Sup[m].Id, Sup[i].Id) == 0)
        {
            printf("Id already exists. Enter a new Id: ");
            scanf("%s", Sup[m].Id);
        }
    }
    printf("Enter the Company Name: ");
    scanf("%s", Sup[m].company_name);
    printf("Enter the Representative Name: ");
    scanf("%s", Sup[m].rep_name);
    printf("Enter the Address: ");
    scanf("%s", Sup[m].address);
    printf("Enter the Description: ");
    scanf("%s", Sup[m].description);
    printf("Enter the Date of Supply: ");
    scanf("%s", Sup[m].date);
    m++;
    // reset color
    printf("\033[0m");
    return m;
}
void searchSupplier(struct Supplier Sup[], int m)
{
    // set color to  green
    printf("\033[0;32m");
    int i;
    char id[SIZE];
    printf("Enter the ID of the Supplier: ");
    scanf("%s", id);
    for (i = 0; i < m; i++)
    {
        if (strcmp(id, Sup[i].Id) == 0)
        {
            printf(" ID\t\tCompany Name\t\tRepresentative Name\t\tAddress\t\tDescription\t\tDate of Supply \t\t \n");
            printf(" %s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t \n", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].address, Sup[i].description, Sup[i].date);
        }
    }
    // reset color
    printf("\033[0m");
}
void editSupplier(struct Supplier Sup[], int m)
{
    // set color to green
    printf("\033[0;32m");
    int i;
    char id[SIZE];
    printf("Enter the ID of the Supplier: ");
    scanf("%s", id);
    int flag = 0;
    for (i = 0; i < m; i++)
    {
        if (strcmp(id, Sup[i].Id) == 0)
        {
            flag = 1;
            printf("Enter the details of the Supplier: \n");
            printf("Enter the ID: ");
            scanf("%s", Sup[i].Id);
            // validation for unique id
            for (int j = 0; j < m; j++)
            {
                if (strcmp(Sup[i].Id, Sup[j].Id) == 0 && i != j)
                {
                    printf("ID already exists. Enter a new ID: ");
                    scanf("%s", Sup[i].Id);
                }
            }
            printf("Enter the Company Name: ");
            scanf("%s", Sup[i].company_name);
            printf("Enter the Representative Name: ");
            scanf("%s", Sup[i].rep_name);
            printf("Enter the Address: ");
            scanf("%s", Sup[i].address);
            printf("Enter the Description: ");
            scanf("%s", Sup[i].description);
            printf("Enter the Date of Supply: ");
            scanf("%s", Sup[i].date);
        }
    }
    if (flag == 0)
    {
        printf("\nSupplier not found\n");
    }
    else
    {
        // set color to green
        printf("\033[0;32m");
        printf("\nSupplier details updated successfully\n");
        // reset color
        printf("\033[0m");
    }
    printf("\n");
    system("pause");
    system("cls");
}
int deleteSupplier(struct Supplier Sup[], int m)
{
    // set color to green
    printf("\033[0;32m");
    int i, j;
    char id[SIZE];
    printf("Enter the ID of the Supplier: ");
    scanf("%s", id);
    int flag = 0;
    for (i = 0; i < m; i++)
    {
        if (strcmp(id, Sup[i].Id) == 0)
        {
            flag = 1;
            for (j = i; j < m; j++)
            {
                Sup[j] = Sup[j + 1];
            }
            m--;
        }
    }
    // set color to magenta
    printf("\033[1;35m");
    if (flag == 1)
    {
        printf("\nThe Supplier has been deleted successfully\n");
        displaySupplier(Sup, m);
        return m;
    }
    else
    {
        printf("\nThe Supplier does not exist\n");
    }
    // reset color
    printf("\033[0m");
    return m;
}

void displaySaleInvoice(struct Sale Sal[], int k)
{
    // read and print the file sale.txt
    // set color to  green
    printf("\033[0;32m");

    FILE *fp;
    fp = fopen("sale.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file sale.txt for reading the data from it !!");
        exit(1);
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            char sale[SIZE];
            char date[SIZE];
            char med_name[SIZE];
            int quantity;
            float price;
            float net_bill;
            fscanf(fp, "%s %s %s %d %f %f %f", sale, date, med_name, &quantity, &price, &net_bill);
            // print the table header
            printf(" Sale No%s\tDate: %s\tMedicine:%s\tQuantity: %d\tPrice: %2.2f\tNet Bill%2.2f ", sale, date, med_name, quantity, price, net_bill);
            printf("\n");
        }
    }
    fclose(fp);
    // reset color
    printf("\033[0m");
}
void buyMedicine(struct Medicine Med[], int n)
{

    // set text color to green
    printf("\033[1;32m");
    printf("How many medicines do you want to buy? ");
    int num;
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Invalid Input. Enter a number greater than 0: ");
        scanf("%d", &num);
    }
    srand(time(0));
    int i;
    FILE *f3;
    static int sale_num = 1;
    for (i = 0; i < num; i++)
    {
        printf("Enter the name of the medicine you want to buy: ");
        char NAMW[SIZE];
        scanf("%s", NAMW);
        int i;
        int flag = 0;
        for (i = 0; i < n; i++)
        {
            if (strcmp(NAMW, Med[i].name) == 0)
            {
                flag = 1;
                int quantity;
                do
                {
                    printf("Enter the quantity of the medicine you want to buy: ");
                    scanf("%d", &quantity);
                } while (quantity < 0);
                if (quantity <= Med[i].total_units_available)
                {

                    float price_per_unit = 20 + rand() % 100;
                    float net_bill = (price_per_unit * quantity);
                    printf("The net bill is: %.3f", net_bill);
                    Med[i].total_units_available -= quantity;
                    f3 = fopen("sale.txt", "a");
                    fprintf(f3, "#s%d 3/12/2022 %s %d %.2f %.2f", sale_num, Med[i].name, quantity, price_per_unit, net_bill);
                    fprintf(f3, "\n");
                    printf("\n#sale.txt updated\n");
                    printf("\tYour Sale invoice is generated\n");
                    printf("s#%d 3/12/2022 Medicine : %s  Quantity: %d Price per Unit: %.1f\tNet Bill:   %2.2f", sale_num, Med[i].name, quantity, price_per_unit, net_bill);
                    fclose(f3);
                    sale_num++;
                    break;
                }
                else
                {
                    printf("The quantity you want to buy is not available");
                }
            }
        }

        if (flag == 0)
        {
            printf("The medicine you want to buy is not available");
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    // reset text color
    printf("\033[0m");
}

void purchaseMedicine(struct Medicine Med[], int n, struct Supplier Sup[], int m)
{
    // set text color magenta
    printf("\033[1;35m");

    for (int i = 0; i < m; i++)
    {
        printf("\n\t%s ", Sup[i].Id);
    }
    printf("\n\nEnter the ID of the Supplier from the list above: ");
    char Supp_id[SIZE];
    scanf("%s", Supp_id);
    int flag = 0;
    int quant;
    static int k = 0;
    char medicine_name[SIZE];
    for (int i = 0; i < m; i++)
    {
        if (strcmp(Supp_id, Sup[i].Id) == 0)
        {
            flag = 1;
            // display detail of supplier
            // set color to green
            printf("\033[1;32m");
            printf("\n\tSupplier ID: %s\t\t Company name: %s\t\t Representative name: %s Description: %s\t\t Date: %s\n", Sup[i].Id, Sup[i].company_name, Sup[i].rep_name, Sup[i].description, Sup[i].date);
            // set color to blue
            printf("\033[1;34m");
            printf("\n\nEnter the name of the Medicine you want to buy from the above list: ");
            for (int i = 0; i < n; i++)
            {
                // set color to red
                printf("\033[1;31m");
                printf("\n\t\t%s ", Med[i].name);
            }
            printf("\n");
            scanf("%s", medicine_name);

            // set color to blue
            printf("\033[1;34m");
            int flag2 = 0;
            for (int j = 0; j < n; j++)
            {
                if (strcmp(medicine_name, Med[j].name) == 0)
                {
                    flag2 = 1;
                    printf("\nEnter the quantity of the Medicine you want to buy: ");
                    scanf("%d", &quant);
                    // set color to green
                    printf("\033[1;32m");
                    float price = 20 + rand() % 100;
                    printf("\nThe priceper unit of the Medicine is: %2.2f\n", price);
                    float total_price = price * quant;
                    printf("\nThe total price of the Medicine is: %2.2f\n", total_price);
                    Med[j].total_units_available = Med[j].total_units_available + quant;
                    printf("\nMedicine purchased successfully!\n");

                    // write in Purchase.txt
                    FILE *fp;
                    fp = fopen("Purchase.txt", "a");
                    fprintf(fp, "#p%d 3/12/2022 %s %d %.2f %.3f", k, Med[j].name, quant, price, total_price);
                    fprintf(fp, "\n");
                    printf("\n#Purchase.txt updated\n");
                    printf("\tYour Purchase invoice is generated\n");
                    printf("p#%d 3/12/2022 Medicine : %s  Quantity: %d Price per Unit: %.1f\tNet Bill:   %2.2f", k, Med[j].name, quant, price, total_price);
                    fclose(fp);
                    k++;
                }
            }
            if (flag2 == 0)
            {
                printf("Sorry, we don't have the Medicine you want to buy. Please try again later.\n");
            }
        }
    }
    if (flag == 0)
    {
        printf("Supplier ID not found. Please try again.\n");
        return;
    }
    printf("\033[0m");
    printf("\n");
    system("pause");
    system("cls");
}

void displayPurchaseInvoice(struct Purchase PUR[], int k)
{
    // read and print the file Purchase.txt
    // set color to  green
    printf("\033[0;32m");

    FILE *fp;
    fp = fopen("Purchase.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file sale.txt for reading the data from it !!");
        exit(1);
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            char perchase[SIZE];
            char date[SIZE];
            char med_name[SIZE];
            int quantity;
            float price;
            float net_bill;
            fscanf(fp, "%s %s %s %d %f %f %f", perchase, date, med_name, &quantity, &price, &net_bill);
            // print the table header
            printf(" Purchase No%s\tDate: %s\tMedicine:%s\tQuantity: %d\tPrice: %2.2f\tNet Bill%2.2f ", perchase, date, med_name, quantity, price, net_bill);
            printf("\n");
        }
    }
    fclose(fp);
    // reset color
    printf("\033[0m");
}
