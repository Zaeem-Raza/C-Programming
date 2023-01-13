/*  Name          Zaeem Raza
    Roll number   BCSF21M022
    Question No   14
*
 *Write a C program to demonstrate banking system. Multiple account holders are input and is identified
by CNIC. Only one account holder with a particular CNIC may exists. Use a structure to hold information
about account holder and account separately. Account structure will contain details of transactions
(e.g. deposit/withdrawal, amount, transaction date etc.) of each account. Write input output function to
collect and display this data from user. Write a function to print bank statement of an account between
two given dates. This program should be menu-driven.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#define MAX 100
// Structure for Account
struct Account
{
    int amount;
    int deposit;
    int withdraw;
    int transactionDate;
};
struct AccountHolder
{
    char Name[SIZE];
    int cnic;
    int numberOfAccounts;
    struct Account accounts[MAX];
};

// functions
void input(struct AccountHolder *accountHolders);
void display(struct AccountHolder *accountHolders);
void printStatement(struct AccountHolder *accountHolders);

int main()
{
    int choice;
    struct AccountHolder accountHolders[MAX];
    struct AccountHolder *accountHolder;
    int numberOfAccountHolders;
    do
    {
        printf("\n1.Input\n2.Display\n3.Print Statement\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input(accountHolders);
            break;
        case 2:
            display(accountHolders);
            break;
        case 3:
            printStatement(accountHolders);
            break;
        case 4:
            printf("Bye");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice != 4);
}
void input(struct AccountHolder *accountHolders)
{

    printf("Enter the name of the account holder: ");
    scanf("%s", accountHolders->Name);
    printf("Enter the CNIC of the account holder: ");
    scanf("%d", &accountHolders->cnic);
    while (accountHolders->cnic < 0)
    {
        printf("Invalid CNIC. Enter again: ");
        scanf("%d", &accountHolders->cnic);
    }
    printf("Enter the number of accounts: ");
    scanf("%d", &accountHolders->numberOfAccounts);
    while (accountHolders->numberOfAccounts < 0)
    {
        printf("Invalid number of accounts. Enter again: ");
        scanf("%d", &accountHolders->numberOfAccounts);
    }

    int i = 0;
    while (i < accountHolders->numberOfAccounts)
    {
        printf("Enter the amount of the account %d: ", i + 1);
        scanf("%d", &accountHolders->accounts[i].amount);
        while (accountHolders->accounts[i].amount < 0)
        {
            printf("Invalid amount. Enter again: ");
            scanf("%d", &accountHolders->accounts[i].amount);
        }
        printf("Enter the deposit of the account %d: ", i + 1);
        scanf("%d", &accountHolders->accounts[i].deposit);
        while (accountHolders->accounts[i].deposit < 0)
        {
            printf("Invalid deposit. Enter again: ");
            scanf("%d", &accountHolders->accounts[i].deposit);
        }
        printf("Enter the withdraw of the account %d: ", i + 1);
        scanf("%d", &accountHolders->accounts[i].withdraw);
        while (accountHolders->accounts[i].withdraw < 0)
        {
            printf("Invalid withdraw. Enter again: ");
            scanf("%d", &accountHolders->accounts[i].withdraw);
        }
        printf("Enter the transaction date of the account %d: ", i + 1);
        scanf("%d", &accountHolders->accounts[i].transactionDate);
        while (accountHolders->accounts[i].transactionDate < 0 || accountHolders->accounts[i].transactionDate > 31)
        {
            printf("Invalid transaction date. Enter again: ");
            scanf("%d", &accountHolders->accounts[i].transactionDate);
        }

        i++;
    }
    system("pause");
    system("cls");
}
void display(struct AccountHolder *accountHolders)
{
    printf("\nName: %s", accountHolders->Name);
    printf("\nCNIC: %d", accountHolders->cnic);
    printf("\nNumber of accounts: %d", accountHolders->numberOfAccounts);

    int i = 0;
    while (i < accountHolders->numberOfAccounts)
    {
        printf("\n");
        printf("\nAmount of the account %d: %d", i + 1, accountHolders->accounts[i].amount);
        printf("\nDeposit of the account %d: %d", i + 1, accountHolders->accounts[i].deposit);
        printf("\nWithdraw of the account %d: %d", i + 1, accountHolders->accounts[i].withdraw);
        printf("\nTransaction date of the account %d: %d", i + 1, accountHolders->accounts[i].transactionDate);
        i++;
        printf("\n");
    }
    system("pause");
    system("cls");
}
void printStatement(struct AccountHolder *accountHolders)
{
    int startDate, endDate;
    printf("Enter the start date: ");
    scanf("%d", &startDate);
    printf("Enter the end date: ");
    scanf("%d", &endDate);
    for (int i = 0; i < accountHolders->numberOfAccounts; i++)
    {
        if (accountHolders->accounts[i].transactionDate >= startDate && accountHolders->accounts[i].transactionDate <= endDate)
        {
            printf("\nAmount of account %d: %d", i + 1, accountHolders->accounts[i].amount);
            printf("\nDeposit of account %d: %d", i + 1, accountHolders->accounts[i].deposit);
            printf("\nWithdraw of account %d: %d", i + 1, accountHolders->accounts[i].withdraw);
            printf("\nTransaction date: %s", accountHolders->accounts[i].transactionDate);
        }
    }
    system("pause");
    system("cls");
}
