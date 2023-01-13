#include <stdio.h>
#define SIZE 3
void getData(int EMpID[], int Sal[], char Dept[], int Age[]);
void SearchEmployee(int EMpID[], int Sal[], char Dept[], int Age[]);
void highest(int EMpID[], int Sal[], char Dept[], int Age[]);
void lessSalary(int EMpID[], int Sal[], char Dept[], int Age[], int s);
void average(int EMpID[], int Sal[], char Dept[], int Age[], char department);
int main()
{

  int EMpID[SIZE];
  int Sal[SIZE];
  char Dept[SIZE];
  int Age[SIZE];
  int user;
  int s;
  char department;
  getData(EMpID, Sal, Dept, Age);
  printf("Enter your choice");
  scanf("%d", &user);
  switch (user)
  {
  case 1:
    SearchEmployee(EMpID, Sal, Dept, Age);
    break;
  case 2:
    highest(EMpID, Sal, Dept, Age);
    break;
  case 3:
    printf("Enter Salary");
    scanf("%d", &s);
    lessSalary(EMpID, Sal, Dept, Age, s);
    break;
  case 4:
    printf("Enter a department");
    scanf(" %c", &department);
    average(EMpID, Sal, Dept, Age, department);
    break;
  }
}

void getData(int EMpID[], int Sal[], char Dept[], int Age[])
{
  for (int i = 0; i < SIZE; i++)
  {
    // getting employee ID
    printf("Enter Employee ID :");
    scanf("%d", &EMpID[i]);

    // getting Salary
    do
    {
      printf("Enter salary");
      scanf("%d", &Sal[i]);
    } while (!(Sal[i] >= 20000 && Sal[i] <= 20000000));

    // getting department
    printf("Enter Department");
    scanf(" %c", &Dept[i]);

    // getting age
    printf("Enter age");
    scanf("%d", &Age[i]);
    while (Age[i] > 60)
    {
      printf("Invalid input\nEnter again");
      scanf("%d", &Age[i]);
    }
    // system("CLS");
  }
}

void SearchEmployee(int EMpID[], int Sal[], char Dept[], int Age[])
{
  int x;
  printf("Enter Employee Id");
  scanf("%d", &x);
  for (int i = 0; i < SIZE; i++)
  {
    if (EMpID[i] == x)
    {
      printf("Salary is :%d", Sal[i]);
      printf("\nDepartment :%c", Dept[i]);
      printf("\nAge :%d", Age[i]);
    }
  }
}

void highest(int EMpID[], int Sal[], char Dept[], int Age[])
{
  int high = 0;
  int y;
  for (int i = 0; i < SIZE; i++)
  {
    if (Sal[i] > high)
    {
      y = i;
    }
  }
  printf("\nEmployee ID :%d", EMpID[y]);
  printf("\nSalary :%d", Sal[y]);
  printf("\nDepartment %c", Dept[y]);
  printf("\nAge :%d", Age[y]);
}

void lessSalary(int EMpID[], int Sal[], char Dept[], int Age[], int s)
{
  int index;
  for (int i = 0; i < SIZE; i++)
  {
    if (Sal[i] < s)
    {
      printf("Employee Id :%d\n", EMpID[i]);
    }
  }
}

void average(int EMpID[], int Sal[], char Dept[], int Age[], char department)
{
  float sum;
  int count = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if (Dept[i] == department)
    {
      printf("Employee %d\n", EMpID[i]);
      count++;
      sum += Sal[i];
    }
  }
  float average = sum / count;
  printf("Average is :%.2f", average);
}
